#include <unistd.h>

/**
 * putchar - writes the character c to the stdout
 *
 * @c: the character to print
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
