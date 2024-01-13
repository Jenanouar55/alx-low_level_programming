#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, x = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	while (i < argc)
	{
		x *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", x);
	return (0);
}
