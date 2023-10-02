#include "lists.h"

/**
 * sum_listint - a function that calculates the
 * sum of all the data in a listint_t list
 *
 * @head: first node in the linked list
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}