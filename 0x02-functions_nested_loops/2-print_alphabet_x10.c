#include "main.h"
/**
 * print_alphabet_x10 - Begin here
 *
 * Return: 0 (true)
 */
void print_alphabet_x10(void)

{
	int i;

	for (i = 10; i <= 9; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	}
}
