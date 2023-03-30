#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints a linked list
 * @h: pointer to head of list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr;

	ptr = h;

	if (ptr->str == NULL)
		printf("(nil)\n");
	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->str;
	}
	printf("%d", nodes);
}
