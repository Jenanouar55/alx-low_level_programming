#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9, excluding 2 and 4
 */
void print_most_numbers(void)
{
	char x;

	x = '0';
	while (x <= '9')
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
