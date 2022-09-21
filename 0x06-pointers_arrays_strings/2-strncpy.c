#include "main.h"
/**
 * _strncpy - coppies a string including the terminating null
 * byte, using atmost an inputted number of bytes
 *
 * @dest: buffer storing the string copy
 *
 * @src: the source string
 *
 * @n: maximum number of string copied
 *
 * Return: returns dest
 */
char *_strncpy(char *dest, xhar *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
