#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc
 * and free
 *
 * @ptr: a pointer to the memory
 *
 * @old_size: the size in the bytes of the allocated space
 *
 * @new_size: the size in bytes of the new memory block
 *
 * Return: if new_size == 0 = NULL
 * if new_size == old_size = ptr
 * else a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_copy, *filler;
	unsigned int i;

	if (ptr != NULL)
	{
		filler = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ptr_copy = malloc(new_size);
	if (ptr_copy == NULL)
	{
		return (0);
	}

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(ptr_copy + 1) = filler[i];
	}
	free(ptr);
	return (filler);
}
