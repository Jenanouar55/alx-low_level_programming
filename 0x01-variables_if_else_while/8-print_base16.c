#include <stdio.h>
/**
 ** main - prints all the numbers of base 16 in lowercase,
 ** followed by a new line
 ** Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char n;

	x = 48;
	while (x < 58)
	{
		putchar(x);
		x++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
