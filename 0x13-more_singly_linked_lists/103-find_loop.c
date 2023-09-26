#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer
 * Return: address where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *new;

	temp = head;
	new = head;
	while (head && temp && temp->next)
	{
		head = head->next;
		temp = temp->next->next;
		if (head == temp)
		{
			head = new;
			new = temp;
			while (1)
			{
				temp = new;
				while (temp->next != head && temp->next != new)
				{
					temp = temp->next;
				}
				if (temp->next == head)
					break;
				head = head->next;
			}
			return (temp->next);
		}
	}
	return (0);
}
