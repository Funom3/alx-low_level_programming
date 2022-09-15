#include "main.h"
/**
 * more_numbers - print number 0-9
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o > 9)
				_putchar(1 + '0');
			_putchar((o % 10) + '0');
		}
		_putchar('\n');
	}
}
