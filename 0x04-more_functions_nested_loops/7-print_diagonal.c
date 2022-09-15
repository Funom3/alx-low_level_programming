#include "main.h"
/**
 * print_diagonal - print a diagonal line using backlashes
 *
 * @n: number of backlashes to use for printing
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; n > 0 && a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
