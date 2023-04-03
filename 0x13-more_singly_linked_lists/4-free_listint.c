#include "lists.h"
#include <stdio.h>

/**
 * free_listint - A function that frees a 'listint_t' list
 * @head: head of linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *end;

	end = head;
	while (end != NULL)
	{
		end = end->next;
		free(end);
	}
}
