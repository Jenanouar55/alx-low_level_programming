#include "main.h"

/**
 * rev_string - reverses a string
 * @s: A pointer to a string
 */
void rev_string(char *s)
{
	char *a, *y, tmp;

	int l, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	y = s + length - 1;
	a = s;
	l = 0;
	while (l < length / 2)
	{
		tmp = *y;
		*y = *a;
		*a = tmp;

		a++;
		y--;
		l++;
	}
}
