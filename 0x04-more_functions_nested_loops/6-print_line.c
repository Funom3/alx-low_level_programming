#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: number of lines to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; n > 0 && a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
