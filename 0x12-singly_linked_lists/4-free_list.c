#include "lists.h"
#include <string.h>

/**
 * free_list - A function that frees 'list_t' list
 * @head: eadof linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
