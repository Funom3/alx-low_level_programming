#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguementsof the programme
 * into a string arguements.
 *
 * @ac: the number of arguements passed to the programme
 *
 * @av: an array of pointers to the arguments
 *
 * Return: if function fails NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++
		}
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[i++] = av[arg][byte];
		}
		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
