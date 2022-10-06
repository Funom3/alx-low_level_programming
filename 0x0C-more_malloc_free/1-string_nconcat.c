#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenantes two strings using a most
 * inputted bytes
 *
 * @s1: the string number one
 *
 * @s2: the string number two
 *
 * @n: the maximum number of bytes
 *
 * Return: NULL if fails, else pointer to concatenate space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int r = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		r++;
	}
	concat = malloc(sizeof(char) * (r + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	r = 0;

	for (i = 0; s1[i]; i++)
	{
		concat[r++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		concat[r++] = s2[i];
	}
	concat[r] = '\0';
	
	return (concat);
}
