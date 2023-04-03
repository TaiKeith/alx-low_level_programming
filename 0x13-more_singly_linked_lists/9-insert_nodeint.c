#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 * position
 * @head: A double pointer to head of node list
 * @idx: The index of the list where new node should be added
 * @n: integer value
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = ptr;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
