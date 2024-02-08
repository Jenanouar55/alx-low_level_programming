#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	x = 0;
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (!(*b == '0' || *b == '1'))
			return (0);
		x <<= 1;
		if (*b == '1')
			x += 1;
		b++;
	}

	return (x);
}
