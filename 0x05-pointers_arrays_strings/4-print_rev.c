#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string location
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	s--;
	for (; i > 0; i--)
	{putchar(*s);
		s--;
	}
	putchar('\n');
}
