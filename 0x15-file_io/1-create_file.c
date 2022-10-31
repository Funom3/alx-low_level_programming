#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: a pointer to the filename to create
 *
 * @text_content: a pointer to a string to write to the file
 *
 * Return: if success 1, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, r;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (r = 0; text_content[r];)
			r++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, r);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
