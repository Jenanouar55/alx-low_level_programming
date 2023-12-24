#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x, y, r;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			r = x * y;

			if (y == 0)
			{
				_putchar(r + '0');
			}
			if (r < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			y++;
		}

		_putchar('\n');
		x++;
	}
}
