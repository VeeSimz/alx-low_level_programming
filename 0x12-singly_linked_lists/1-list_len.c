#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			h = h->next;
		nodes++;
	}
	return (nodes);
}
