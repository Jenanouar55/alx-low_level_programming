#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 */

size_t list_len(const list_t *h)
{
	const list_t *k;
	unsigned int c = 0;

	k = h;
	while (k)
	{
		c++;
		k = k->next;
	}
	return (c);
}
