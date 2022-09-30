#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to string location
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
