#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer
 * @index: index of the node
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
		return (NULL);
		head = head->next;
	}
	return (head);
}
