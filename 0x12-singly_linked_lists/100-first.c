#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main file is executed
 *
 * Return: nothing
 */
void hare(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
