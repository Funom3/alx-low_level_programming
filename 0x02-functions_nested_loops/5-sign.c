#include "main.h"
/**
 * print_sign - Begin here
 *
 * return 1 if lower case and zero if not
 *
 * @n: interger value
 *
 * Return: always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

