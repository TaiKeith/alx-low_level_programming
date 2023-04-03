#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements
 * in a linked 'listint_t' list
 * @h: A pointer to the head of node
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p;

	p = h;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	printf("%d", count);
}
