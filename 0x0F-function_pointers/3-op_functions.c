#include "3-calc.h"

/**
 * op_add - add two intergers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: difference of the two integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: qoutient of two integers
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate thwe modulus of two integer
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: mod of two integers
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

