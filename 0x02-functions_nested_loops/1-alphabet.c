#include "main.h"
/**
 * print_alphabet - Begin here
 *
 * print a-z using putchar
 *
 * Return: always 0 (true)
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
