#include "lists.h"

/**
 * free_listint2 - A function that frees a 'listint_t' list
 * @head: A double pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *end;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		end = *head;
		*head = (*head)->next;
		free(end);
	}
}
