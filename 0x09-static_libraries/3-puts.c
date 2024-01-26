#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to the standard output followed by a newline.
 *
 * @str: The input string to be printed.
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
