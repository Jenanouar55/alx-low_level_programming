#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 * ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 100)
	{
		y = 0;
		while (y < 100)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			x++;
		}
	}
	putchar('\n');
	return (0);
}
