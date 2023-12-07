#include "lists.h"

/**
  * insert_dnodeint_at_index - function that inserts a
  *     new node at a given position
  * @h: pointer to a pointer of a node
  * @idx: index of the list where the new node should be added
  * @n: data to the node
  * Return: the address of the new node, or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	current = *h;
	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		if (current)
			current->prev = new_node;

		*h = new_node;
		return (new_node);
	}
	for (i = 0; current && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (!current || i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next)
	{
		current->next->prev = new_node;
	}
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
