#include "main.h"
/**
 * print_to_98 - prints all numbers
 *
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	{
	else (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
