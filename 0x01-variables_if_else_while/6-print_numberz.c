#include <stdio.h>
/**
 ** main - prints all single digit numbers of base
 ** 10 starting from 0, followed by a new line
 ** Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar ('\n');
	return (0);
}
