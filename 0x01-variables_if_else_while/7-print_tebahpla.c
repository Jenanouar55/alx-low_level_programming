#include <stdio.h>
/**
 ** main - prints the lowercase alphabet in reverse,
 ** followed by a new line
 ** Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar (x);
		x--;
	}

	putchar('\n');
	return (0);
}
