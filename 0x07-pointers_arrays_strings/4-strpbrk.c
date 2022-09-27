#include "main.h"

/**
 * _strbrk - searches a string for any set of bytes
 *
 * @s: the string to be searched
 *
 * @accept: the set of bytes to be searched for
 *
 * Return: if true to the pointer to be matched byte 
 * else NULL
 */
char *strbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
