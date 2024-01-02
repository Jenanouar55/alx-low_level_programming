#include "main.h"

/**
 * strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int c;
	int i;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		c++;
		i++;
	}

	return (c);
}
