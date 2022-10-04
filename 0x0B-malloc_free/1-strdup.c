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
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
