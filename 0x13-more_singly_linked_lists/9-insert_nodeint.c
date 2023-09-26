#include "lists.h"

listint_t *create_new_node(int n);

/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: head pointer
 * @idx: index of new node
 * @n: data at new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *old;
	unsigned int i;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = create_new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = temp;
	else
	{
		old = temp->next;
		temp->next = new;
		new->next = old;
	}
	return (new);

}
/**
 * create_new_node - creates a node
 * @n: node data
 * Return: node pointer
 */
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}
