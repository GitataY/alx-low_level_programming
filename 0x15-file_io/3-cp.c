#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int dfr, dfw, k, l, m;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fil_frm fil_t\n");
		exit(98);
	}
	dfw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(dfr, buf, BUFSIZ)) > 0)
	{
		if (dfw < 0 || write(dfw, buf, k) != k)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(dfr);
			exit(99);
		}
	}
	if (k < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	l = close(dfr);
	m = close(dfw);
	if (l < 0 || m < 0)
	{
		if (l < 0)
			dprintf(STDERR_FILENO, "Error: Can't close df %d\n", dfr);
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close df %d\n", dfw);
		exit(100);
	}
	return (0);
}


