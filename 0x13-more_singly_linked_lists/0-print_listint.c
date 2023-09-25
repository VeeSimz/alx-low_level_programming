#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		printf("Empty list");

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
