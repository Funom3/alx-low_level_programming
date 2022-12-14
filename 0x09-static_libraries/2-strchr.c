#include "main.h"

/**
 * _str - locates a character in string
 *
 * @s: string to check
 *
 * @c: character to check
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
