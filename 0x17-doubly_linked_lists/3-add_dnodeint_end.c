#include "lists.h"

/**
  * add_dnodeint_end - add new node at the end of a list
  * @head: pointer to a pointer to a new node
  * @n: data to the new node
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
	}
	tail->next = new_node;
	new_node->prev = tail;
	return (new_node);
}
