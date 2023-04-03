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
	listint_t *begin, *end;

	begin = head;
	while (begin != NULL)
	{
		end = begin->next;
		free(begin->n);
		free(begin);
		begin = end;
	}
}
