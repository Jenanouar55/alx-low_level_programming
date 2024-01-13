#include <stdio.h>
/**
 * main - function
 * @argc: number of commande-line arguments
 * @argv: array of strings containing the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

