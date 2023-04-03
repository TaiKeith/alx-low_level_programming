#include "lists.h"

/**
 * reverse_listint - A function that reverses a 'listint_t' linked list
 * @head: A double pointer to the head of list node
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		behind = *head;
		*head = forward;
	}

	(*head)->next = backward;
	return (*head);
}
