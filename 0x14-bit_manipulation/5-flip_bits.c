#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @x: first number.
 * @y: second number.
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned long int i = x ^ y;
	unsigned int counter = 0;

	while (i > 0)
	{
		counter++;
		i &= (i - 1);
	}
	return (counter);
}
