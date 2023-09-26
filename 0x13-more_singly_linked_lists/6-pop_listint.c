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
		printf("List is already empty");
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (0);
}
