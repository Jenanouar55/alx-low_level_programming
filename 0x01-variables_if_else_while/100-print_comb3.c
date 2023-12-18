#include <stdio.h>
/**
 ** main - prints all possible different combinations of two digits
 ** Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	x = 48;
	while (x <= 56)
	{
		y = x + 1;
		while (y <= 57)
		{
			putchar(x);
			putchar(y);

		if (x != 56 || y != 57)
		{
			putchar(',');
			putchar(' ');
		}

		y++;

	}

	x++;

	}

	putchar('\n');
	return (0);
}
