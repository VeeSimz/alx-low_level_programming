#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (new == NULL)
			return (*head);
		*head = new;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (0);
}
