#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize
 * it with a specific char.
 *
 * @size: the size of the array to be initialized.
 *
 * @c: the specific char to initialize the arraty with.
 *
 * Return: A pointer to array, if size = 0 - NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
