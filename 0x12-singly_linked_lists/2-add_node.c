#include "lists.h"

/**
  * add_node - add new node at the begining of a list_t
  * @head: pointer to the head of list
  * @str: pointer to string to be added to list
  * Return: the length of list
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->str = strdup(str);
	add_node->len = strlen(str);
	add_node->next = *head;

	*head = add_node;
	return (add_node);
}
