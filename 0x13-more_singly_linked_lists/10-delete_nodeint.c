#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index 'index'
 * of a 'listint_t' linked list
 * @head: A double pointer to the head of node list
 * @index: The index of the node that should be deleted, starts at 0
 *
 * Return: 1 if successful or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int node;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
