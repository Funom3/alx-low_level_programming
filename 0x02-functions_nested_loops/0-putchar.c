#include "main.h"

/**
 * main - Entry point, print text as output
 *
 * Return: always 0
 */
int main(void)
{
	char letters[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
	return (0);
}
