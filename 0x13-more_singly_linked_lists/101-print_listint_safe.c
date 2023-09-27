#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

/**
 * looped_listint_len - counts number of codes
 * @head: head pointer
 * Return: number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *new;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	temp = head->next;
	new = (head->next)->next;
	while (new)
	{
		if (temp == new)
		{
			temp = head;
			while (temp != new)
			{
				nodes++;
				temp = temp->next;
				new = new->next;
			}
			temp = temp->next;
			while (temp != new)
			{
				nodes++;
				temp = temp->next;
			}
			return (nodes);
		}
		temp = temp->next;
		new = (new->next)->next;
	}
	return (0);
}
