#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the input string to be printed
 */
void _puts(char *str)
{
	char *c = str;

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
