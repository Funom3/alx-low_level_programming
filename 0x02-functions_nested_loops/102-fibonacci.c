#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long int sum;
	long int c1 = 0;
	long int c2 = 1;

	for (i = 1; i <= 50; i++)
	{
		sum = c1 + c2;
		printf("%ld", sum);
		c1 = c2;
		c2 = sum;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
