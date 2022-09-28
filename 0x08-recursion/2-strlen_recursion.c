#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 *
 * @s: string
 *
 * Return: 1 if success, -1 if error, error make appropriately
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ( + _strlen_recursion(s + 1));
	}
	return (0);
}
