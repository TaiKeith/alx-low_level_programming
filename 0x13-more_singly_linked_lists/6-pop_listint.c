#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a 'listint_t' list
 * @head: A double pointer to the head of list
 *
 * Return: The head node's data(n), if empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int k = 0;

	if (*head == NULL)
		return (0);

	new = *head;
	k = new->n;
	*head = (*head)->next;
	free(new);
	return (k);
}
