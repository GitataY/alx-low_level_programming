#include "main.h"

/**
 * create_file - it basically creates a new file
 * @filename: the name of the file we will create
 * @text_content: text we are writing to the file
 * Return: 1 if sucess, -1 if unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int df;
	int p;
	int m;

	if (!filename)
		return (-1);

	df = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (df == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (p = 0; text_content[p]; p++)
		;
	m = write(df, text_content, p);

	if (m == -1)
		return (-1);

	close(df);

	return (1);
}
