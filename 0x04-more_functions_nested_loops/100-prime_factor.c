#include "main.h"
/**
 * main - highest prime numbers
 *
 * Return: value 0
 */
int main(void)
{
	long int i, num;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % 1 == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
