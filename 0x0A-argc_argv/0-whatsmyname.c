#include <stdio.h>
/**
 * main - fuction
 * @argc: offest count
 * @argv: offest value
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
