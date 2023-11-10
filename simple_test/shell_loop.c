#include "shell.h"

/**
 * _mnshl - function for looping the shell
 * @noti: the container
 * @arg_v: arg vtr gotten from the main function
 *
 * Return: 0 (Success), 1 (failure) / code for failuer
 * Authors: Kelvin Njuiri and Bismark Kete
 */
int _mnshl(info_t *noti, char **arg_v)
{
	int b_ltn = 0;
	ssize_t m = 0;

	while (b_ltn != -2 && m != -1)
	{
		clear_info(noti);
		if (_comint(noti))
			_puts("$ ");
		_eputchar(FLS_BFR);
		m = get_input(noti);
		if (m != -1)
		{
			set_info(noti, arg_v);
			b_ltn = _bltnfd(noti);
			if (b_ltn == -1)
				_fdexc(noti);
		}
		else if (_comint(noti))
			_putchar('\n');
		free_info(noti, 0);
	}
	write_history(noti);
	free_info(noti, 1);
	if (!_comint(noti) && noti->status)
		exit(noti->status);
	if (b_ltn == -2)
	{
		if (noti->err_num == -1)
			exit(noti->status);
		exit(noti->err_num);
	}
	return (b_ltn);
}

/**
 * _bltnfd - function that locates a cmd
 * @noti: structure
 * Return: 0 (Success), 1 (located but didn't succeed),
 *	-1 (failure to locate) and -2 (exit())
 */
int _bltnfd(info_t *noti)
{
	builtin_table tb_bltn[] = {
		{"env", _myenv},
		{"exit", _myexit},
		{"help", _myhelp},
		{"history", _myhistory},
		{"setenv", _mysetenv},
		{"unsetenv", _myunsetenv},
		{"cd", _mycd},
		{"alias", _myalias},
		{NULL, NULL}
	};
	int b_ltn = -1, index;

	for (index = 0; tb_bltn[index].type; index++)
		if (_strcmp(noti->argv[0], tb_bltn[index].type) == 0)
		{
			noti->line_count++;
			b_ltn = tb_bltn[index].func(noti);
			break;
		}
	return (b_ltn);
}

/**
 * _fdexc - locates an executable cmd
 * @noti: structure
 *
 * Return: nothing
 */
void _fdexc(info_t *noti)
{
	int index, x;
	char *loc = NULL;

	noti->path = noti->argv[0];
	if (noti->linecount_flag == 1)
	{
		noti->line_count++;
		noti->linecount_flag = 0;
	}
	for (index = 0, x = 0; noti->arg[index]; index++)
		if (!_delimeter(noti->arg[index], " \t\n"))
			x++;
	if (!x)
		return;

	loc = _fdpth(noti, _getenv(noti, "PATH="), noti->argv[0]);
	if (loc)
	{
		noti->path = loc;
		_fkexc(noti);
	}
	else
	{
		if ((_getenv(noti, "PATH=") || _comint(noti)
		|| noti->argv[0][0] == '/') && _isexc(noti, noti->argv[0]))
			_fkexc(noti);
		else if (*(noti->arg) != '\n')
		{
			noti->status = 127;
			print_error(noti, "not found\n");
		}
	}
}

/**
 * _fkexc - forks an executable
 * @noti: structure
 * Return: nothing
 */
void _fkexc(info_t *noti)
{
	pid_t pd_ch;

	pd_ch = fork();
	if (pd_ch == -1)
	{
		perror("Error:");
		return;
	}
	if (pd_ch == 0)
	{
		if (execve(noti->path, noti->argv, get_environ(noti)) == -1)
		{
			free_info(noti, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
	}
	else
	{
		wait(&(noti->status));
		if (WIFEXITED(noti->status))
		{
			noti->status = WEXITSTATUS(noti->status);
			if (noti->status == 126)
				print_error(noti, "Permission denied\n");
		}
	}
}

