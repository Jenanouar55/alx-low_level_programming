#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: A pointer to a string
 */
void puts_half(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	y = (x + 1) / 2;
	x = y;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
