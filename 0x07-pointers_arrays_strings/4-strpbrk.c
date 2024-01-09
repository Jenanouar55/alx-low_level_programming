#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s);
			}
			y++;
		}
		x++;
		s++;
		y = 0;
	}
	return (NULL);
}
