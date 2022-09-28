#include "main.h"

/**
 * sqrt2 - makes possible to evaluate from 1 to n
 *
 * @a: equal number of n
 *
 * @b: number that iterates from 1 to n
 *
 * Return: 1 on success
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: number of integer
 *
 * Return: 1 on success
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
