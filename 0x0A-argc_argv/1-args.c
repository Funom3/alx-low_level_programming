#include <stdio.h>

/**
 * main - prints the number of arguement passed into main
 *
 * @argc: number of command lines
 *
 * @argv: array name
 *
 * Return: o
 */
int main(int argc, char *argv[])
{
	*argc = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
