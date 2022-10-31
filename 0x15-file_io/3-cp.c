#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void clode_file(int fd);

/**
 * create_buffer - allocates 1024 bytes to a buffer
 *
 * @file: the name of the file buffer is storing
 *
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
