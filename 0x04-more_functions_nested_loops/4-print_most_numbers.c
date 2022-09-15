#include "main.h"
/**
 * print_most_numbers - print number 0-9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 4 || n == 2)
			continue;
		_putchar(n + '0');
	}
	_putchar('\n');
}
