#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character ti print 
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char x)
{
	return write (1, &x, 1);
}	
