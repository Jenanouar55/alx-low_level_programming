#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address of the first node in a list.
 * @index: Position of a the node to find (starting from 0).
 * Return: Node address.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	if (head == NULL)
		return (NULL);
	while (x < index)
	{
		head = head->next;
		x++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
