#include "main.h"
/**
 * _islower - Begins here
 *
 * return 1 if lower case and 0 if not
 *
 * Return: 0 (true)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
