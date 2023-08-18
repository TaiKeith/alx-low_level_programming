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
	dlistint_t *newnode = NULL, *temp = NULL;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (!h || !(*h))
		*h = newnode;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			newnode->prev = temp->prev;
		else
			newnode->prev = temp;
		if (idx == i)
			temp->next = newnode, newnode->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = newnode;
			else
				*h = newnode;
			temp->prev = newnode;
			newnode->next = temp;
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	return (newnode);
}
