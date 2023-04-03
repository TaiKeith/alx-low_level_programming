#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all data(n) of 'listint'
 * list
 * @head: A pointer to the head node of list
 *
 * Return: Sum of all data(n) of list otherwise 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
