#include "main.h"
/**
 * swap_int - use pointer to change value location in a memory
 * @n: pointer to int a location
 * @b: pointer to int b location
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = j;
	*b = i;
}
