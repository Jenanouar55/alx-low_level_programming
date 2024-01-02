#include "main.h"

/**
 * strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int_strlen(char *s)
{
	int c;
	int i;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		c++;
		i++;
	}

	return (c);
}
