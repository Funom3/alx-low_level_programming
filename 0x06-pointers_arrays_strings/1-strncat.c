#include "main.h"
/**
 * _strncat - concatenate two strings and add the inputted
 * number of their bytes
 *
 * @dest: string to be appended upon
 *
 * @src: string to be completed at the end of dest
 *
 * @n: integer parameter to compare index to
 *
 * Return: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++
	}

	while (src[b] && n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	dest[a] = '\0';
	return (dest);
}
