#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	x = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}

			_putchar('\n');
			x++;
		}
	}
}
