#include "main.h"

/**
 * create_array -> creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
