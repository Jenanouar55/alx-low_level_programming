#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	x = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (x < n)
	{
		y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}

		_putchar('\\');
		_putchar('\n');
		x++;
	}
}
