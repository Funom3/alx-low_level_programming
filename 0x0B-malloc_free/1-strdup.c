#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * the memory containing a copy of the string given.
 *
 * @str: the string to be copied.
 *
 * Return: a pointer to the duplicated string if str = NULL
 * NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		arr[len] = str[len];
	arr[len] = '\0';
	return (arr);
}
