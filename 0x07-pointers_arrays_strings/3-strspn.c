#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, tmp;

	tmp = 0;
	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			z = 0;
			if (s[x] == accept[y])
			{
				tmp++;
			}
			y++;
		}
		if (!accept[y])

		{
			return (tmp);
		}
		x++;
	}
	return (0);
}
