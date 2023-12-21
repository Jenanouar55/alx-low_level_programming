#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	x = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x <= size)
		{
			y = size - x;
			while (y >= 1)
			{
				_putchar(' ');
				y--;
			}
			z = 1;
			while (z <= x)
			{
				_putchar('#');
				z++;
			}

			_putchar('\n');
			x++;
		}
	}
}
