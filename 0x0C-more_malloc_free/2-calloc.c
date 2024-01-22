#include "ziad.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements.
 * @size: number of bytes.
 *
 * Return: NULL if nmemb/size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int nb, i;
	char *a, *b;

	if ((nmemb || size) == 0)
		return (NULL);
	nb = nmemb * size;
	a = b = malloc(nb);
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < nb)
	{
		*a++ = 0;
		i++;
	}

	return (b);
}
