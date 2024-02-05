#include "lists.h"

/**
 * add_nodeint - add node to begining of list
 * @head: linked list
 * @n: data to add to node
 * Return: new head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dest = NULL;

	dest = malloc(sizeof(listint_t));
	if (dest == NULL)
		return (NULL);
	dest->n = n;
	dest->next = *head;
	*head = dest;
	return (*head);
}
