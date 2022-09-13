#include "main.h"
/**
 * _islower - Begins here
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
