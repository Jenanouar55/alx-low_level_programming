#include "main.h"

/**
 * is_numerical - check if it is a digit
 * @n: Number
 * Return: If is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' &&  n <= '9');
}
/**
 * _atoi - convert a string to an integer
 * @s: String
 * Return: Return the num
 */
int _atoi(char *s)
{
	unsigned int x, y;
	int z;

	z = 1;
	x = 0;
	y = 0;
	while (s[y] != '\0')
	{
		if (is_numerical(s[y]))
		{
			x = (s[y] - 48) + x * 10;

			if (s[y + 1] == ' ')
				break;
		}
		else if (s[y] == '-')
		{
			z *= -1;
		}

		y++;
	}

	return (x * z);
}
