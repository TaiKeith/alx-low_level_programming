#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: Double pointer to the head of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
