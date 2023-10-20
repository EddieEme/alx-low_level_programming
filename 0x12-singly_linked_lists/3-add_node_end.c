#include "lists.h"

/**
  * add_node_end - add new node at the end of a list_t
  * @head: pointer to the head of list
  * @str: pointer to string to be added to list
  * Return: the length of list
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *add_node_end = malloc(sizeof(list_t));

	if (add_node_end == NULL)
	{
		return (NULL);
	}

	add_node_end->str = strdup(str);
	add_node_end->len = strlen(str);
	add_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_node_end;
		return (add_node_end);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = add_node_end;

	return (add_node_end);
}
