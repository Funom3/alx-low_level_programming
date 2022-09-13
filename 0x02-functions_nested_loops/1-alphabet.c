#include "main.h"
/**
 * main - Entry point
 *
 * print a-z using putchar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
