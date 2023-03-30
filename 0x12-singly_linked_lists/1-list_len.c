#include "lists.h"
#include <stdio.h>

/**
 * list_len - A function that returns the numer of elements in a linked list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
