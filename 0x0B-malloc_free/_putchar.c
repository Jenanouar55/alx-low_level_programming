#include <unistd.h>

/**
 * _putchar - writes c character in the stdout
 * @c: the character to be printed
 * Return: on success 1
 * On error, return -1 and set error appropriately
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
