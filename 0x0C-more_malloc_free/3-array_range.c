#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer ordered
 *
 * @min: the first value of the array
 *
 * @max: the last value
 *
 * Return: if min > max or function fails - NULL
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
