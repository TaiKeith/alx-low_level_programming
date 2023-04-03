#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of
 * 'listint_t' list
 * @head: A double pointer to head of the list
 * @n: Number of elements
 *
 * Return: Address of the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *new;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;
	if (*head == NULL)
		*head = last_node;
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = last_node;
	}
	return (last_node);
}
