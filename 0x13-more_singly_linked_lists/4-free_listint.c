#include "lists.h"

/**
 * free_listint - free linked list
 * @h: linked list
 * Return: nothing
 */

void free_listint(listint_t *h)
{
	listint_t *x = NULL;

	while (h != NULL)
	{
		x = h->next;
		free(h);
		if (x == NULL)
			break;
		h = x;
	}
}
