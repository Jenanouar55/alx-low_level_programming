#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: linked list
 * @n: data to add to node
 * Return: new head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dest = NULL, *last_vu = NULL;

	dest = malloc(sizeof(listint_t));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	dest->n = n;
	dest->next = NULL;
	last_vu = *head;
	if (*head != NULL)
	{
		while (*head != NULL)
		{
			if (last_vu->next == NULL)
				break;
			last_vu = last_vu->next;
		}
		last_vu->next = dest;
	}
	else
		*head = dest;
	return (*head);
}
