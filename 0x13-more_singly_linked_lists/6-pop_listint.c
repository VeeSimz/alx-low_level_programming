#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head pointer
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (1);
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (0);
}
