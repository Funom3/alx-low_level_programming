#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to string location
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
