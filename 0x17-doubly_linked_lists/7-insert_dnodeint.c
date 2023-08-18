#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Double pointer
 * @idx: index of the list where new node will be added
 * @n: The element to be added
 *
 * Return: Address of new node, otherwise NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newnode;
		newnode->next = *h;
		*h = newnode;
	}

	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next == newnode)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
