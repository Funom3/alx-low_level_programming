#include "main.h"
/**
 * *_memset - fills n bytes of memory pointed by s with the byte b
 *
 * @s: pointer to array location
 *
 * @b: constant byte to replace sorted date
 *
 * @n: number of byte replaced
 *
 * Return: pointer to s memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

