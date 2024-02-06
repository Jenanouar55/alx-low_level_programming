#include "lists.h"

/**
 * free_listint2 - free linked list
 * @h: linked list
 * Return: nothing
 */

void free_listint2(listint_t **h)
{
	listint_t *x = NULL;

	while (h != NULL)
	{
		x = (*h)->next;
		free(*h);
		if (x == NULL)
		{
			*h = x;
			break;
		}
		*h = x;
	}
}
