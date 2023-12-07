#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index of a
  *    linked list
  * @head: pointer to a pointer of a node
  * @index: the index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!*head)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		if (current->next)
		{
			current->next->prev = NULL;
		}
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index - 1; i++)
	{
		current = current->next;
	}
	if (!current || !current->next || i != index - 1)
	{
		return (-1);
	}
	current->next->next->prev = current;
	current->next = current->next->next;
	free(current->next);
	return (1);
}
