#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	long int f = 0;
	long int c1 = 0;
	long int c2 = 1;
	long int sum = 0;
	long int total = 0;

	while (sum <= 4000000)
	{
		f = c1 + c2;
		total += f;
		if (f % 2 == 0)
			sum += f;
		c1 = c2;
		c2 = f;
	}
	printf("%ld\n", sum);
	return (0);
}

