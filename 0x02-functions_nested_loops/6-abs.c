#include "main.h"
/**
 * abs - Begin here
 *
 * computes absolute values and returns the value
 *
 * @n: interger value
 *
 * Return: Value absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
