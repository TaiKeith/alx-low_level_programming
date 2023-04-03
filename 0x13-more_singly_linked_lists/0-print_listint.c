#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all elements of a list
 * @h: A pointer to head of node
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
		printf("%d", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
