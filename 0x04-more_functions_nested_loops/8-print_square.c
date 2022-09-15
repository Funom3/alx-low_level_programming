#include "main.h"
/**
 * print_square - print a square
 *
 * @size: number of _ lines to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; size > 0 && a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
