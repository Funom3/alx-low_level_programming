#include "main.h"
/**
 * print_last_digit - Begin here
 *
 * @n: interger number
 *
 * Return: Value 0
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
