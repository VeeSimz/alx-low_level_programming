#include "lists.h"

/**
 * add_node - adds a new node at the beginninf of list_t
 * @head: head pointer
 * @str: string to be added
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;

	return (*head);
}
