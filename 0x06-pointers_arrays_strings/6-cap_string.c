#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @n: input value
 *
 * Return: string
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <== 'z'))
			i++

				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] += ('A' - 'a');
				}
		}
		i++;
	}
	return (n);
}
