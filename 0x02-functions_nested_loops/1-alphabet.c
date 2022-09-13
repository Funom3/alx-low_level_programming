#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'a')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
