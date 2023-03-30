#include "lists.h"
#include <string.h>

/**
 * add_node_end - A function that adds a new node at the end of 'list_t' list
 * @head: A pointer to the head of the list
 * @str: The string to be duplicated and added to the list
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (; str[length];)
		length++;

	new->str = dup;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
