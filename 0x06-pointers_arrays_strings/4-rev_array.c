#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int *start_ptr, *end_ptr, temp;

	int i = 0;

	start_ptr = a;
	end_ptr = a;
	while (i < n - 1)
	{
		end_ptr++;
		i++;
	}
	i = 0;
	while (i < n / 2)
	{
		temp = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = temp;
		start_ptr++;
		end_ptr--;
		i++;
	}
}
