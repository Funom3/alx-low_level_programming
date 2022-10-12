#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: arguementscounter
 *
 * @argv: argument vector
 *
 * Return: o if no error
 */
int main(int argc, char *argv[])
{
	register int a, b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	fptr = get_op_func(argv[2]);
	if (!fptr)
	{
		printf("Error\n"), exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", fptr(a, b))
	return (0);
}
