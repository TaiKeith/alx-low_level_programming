#include "lists.h"

/**
 * add_dnodeint_end -  Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the node
 * @n: Element to be added
 *
 * Return: Address of the new element || NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
