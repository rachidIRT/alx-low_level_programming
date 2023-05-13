#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fille_behind, fille_infront, err_join;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fille_behind = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fille_behind, fille_infront, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fille_behind, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(fille_infront, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_join = close(fille_behind);
	if (err_join == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fille_behind);
		exit(100);
	}

	err_join = close(fille_infront);
	if (err_join == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fille_behind);
		exit(100);
	}
	return (0);
}
