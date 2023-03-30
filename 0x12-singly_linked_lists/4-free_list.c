#include "lists.h"
#include <string.h>

/**
 * free_list - A function that frees 'list_t' list
 * @head: eadof linked list
 */
void free_list(list_t *head)
{
	list_t *start, *end;

	start = head;

	while (start != NULL)
	{
		end = start->next;
		free(start->str);
		free(start);
		start = end;
	}
}
