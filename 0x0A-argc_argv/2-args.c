#include <stdio.h>

/**
 * main - prints all argument
 *
 * @argc: the number of arguments
 *
 * @argv: the array of pointers
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int argv;

	for (argv = 0; argv < argc; argv++)
		printf("%s\n", argv[argv]);
	return (0);
}
