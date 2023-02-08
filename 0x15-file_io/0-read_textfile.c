#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: the name of the file
 * @letters: number of the letters
 * Return: number of letters printed. If it fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int df;
	ssize_t k, l;
	char *buf;

	if (!filename)
		return (0);

	df = open(filename, O_RDONLY);

	if (df == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	k = read(df, buf, letters);
	l = write(STDOUT_FILENO, buf, k);

	close(df);

	free(buf);
	return (l);
}
