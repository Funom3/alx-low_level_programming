#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function
 *
 * @array: pointer parametre of type int
 *
 * @size: size of the array
 *
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
	{
		return;
	}
	while (size > 0)
	{
		(*action)(*array);
		array++;
		size--;
	}
}
