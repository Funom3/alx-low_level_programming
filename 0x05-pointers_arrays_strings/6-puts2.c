#include "main.h"
/**
 * puts2 - prints every character of the string starting from the
 * first
 *
 * @str: pointer to string location
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	len--;
	for (z = 0 ; z <= len ; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
		putchar('\n');
	}
}
