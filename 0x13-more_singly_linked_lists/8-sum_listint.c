#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a listint_t linked list
 * @head: head pointer
 * Return: sum of node data
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
