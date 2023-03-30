#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - A function that adds a new node at the beginning of 'list_t' list
 * @head: double pointer to head
 * @str: string to be duplicated and saved in new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count;

	for (count = 0; dup_str[count] != '\0'; count++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
