#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int a;

	for (i = 10; i <= 19; i++)
	{
		for (a = 10; a = <=19; a++)
		{
			if ((a % 10) > (i % 10))
			{
				putchar((i % 10) = '0');
				putchar((a % 10) = '0');
				if (i != 18 || a != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
