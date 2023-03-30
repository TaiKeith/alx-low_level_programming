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

	while (ptr)
	{
		printf("[%u] ", ptr->len);
		if (ptr->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", ptr->str);

		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
