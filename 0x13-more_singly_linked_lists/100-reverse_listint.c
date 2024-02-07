#include <stdlib.h>
#include "lists.h"

/**
 * *reverse_listint - reversed a linked list.
 *
 * @head: pointer to head.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *dest, *next;

	dest = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = dest;
		dest = (*head);
		(*head) = next;
	}
	*head = dest;
	return (*head);
}
