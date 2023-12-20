#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times 
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
