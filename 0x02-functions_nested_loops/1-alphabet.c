#include "main.h"
/**
 *  print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
