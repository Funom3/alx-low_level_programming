#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string location
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char rev[500];
	int count;
	
	while (*s)
	{
		a++;
		s++;
	}
	s--;
	for (a = 0; a > 0; a--)
	{
		rev[b] = *s;
		s--;
		b++;
	}
	s++;
	count = b;
	for (b = 0; b < count; b++)
		*(s + b) = rev[b];
}
