#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: head pointer
 * @str: node point
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *temp, *new;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	temp->len = count;
	temp->next = NULL;
	new  = *head;

	if (new == NULL)
		*head = temp;
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = temp;
	}

	return (*head);
}
