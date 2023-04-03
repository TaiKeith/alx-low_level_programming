#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a list
 * @h: A pointer to the head of node
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
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
