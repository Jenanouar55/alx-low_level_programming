#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: the number of underscores to print
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');
		x++;
	}

	_putchar('\n');
}
