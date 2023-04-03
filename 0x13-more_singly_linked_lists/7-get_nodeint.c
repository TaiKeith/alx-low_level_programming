#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of 'listint_t'
 * linked list
 * @head: A pointer to the head of list
 * @index: The index of the node, starting at 0
 *
 * Return: A pointer to the nth node of list or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int incr;

	for (incr = 0; incr < index; incr++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
