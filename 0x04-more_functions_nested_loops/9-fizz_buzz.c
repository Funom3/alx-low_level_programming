#include "main.h"
/**
 * main - fizz buzz coding
 *
 * Return: void
 */
int main(void)
{
	int a;
	
	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	{
	printf("Buzz\n");
	}
	return (0);
}
