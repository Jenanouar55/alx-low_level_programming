#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t1, *t2;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);

	t1 = malloc(sizeof(list_t));
	if (t1 == NULL)
		return (NULL);

	t1->str = strdup(str);
	if (t1->str == NULL)
	{
		free(t1);
		return (NULL);
	}

	while (str[l])
		l++;

	t1->len = l;
	t1->next = NULL;


	if (*head == NULL)
	{
		*head = t1;
		return (t1);
	}

	t2 = *head;
	while (t2->next)
		t2 = t2->next;

	t2->next = t1;
	return (t1);
}
