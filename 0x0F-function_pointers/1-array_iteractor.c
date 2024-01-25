#include "function_pointers.h"

/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
