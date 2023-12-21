#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int x;
	int y;

	x = 1;
	while (x <= 10)
	{
		y = 0;
		while (y <= 14)
		{
			if (y >= 10)
				_putchar('1');
			_putchar(y % 10 + '0');
			y++;
		}

		_putchar('\n');
		x++;
	}
}
