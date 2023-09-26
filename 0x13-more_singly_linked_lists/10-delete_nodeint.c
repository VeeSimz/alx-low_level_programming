#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 * @head: head pointer
 * @index: index of the node
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && temp != NULL && index != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		new = temp->next;
		free(temp);
		*head = new;
	}
	else
	{
		if (temp->next == NULL)
			new = temp->next;
		else
			new = temp->next->next;
		free(temp->next);
		temp->next = new;
	}
	return (1);
}
