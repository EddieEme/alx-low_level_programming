#include "lists.h"

/**
  * get_dnodeint_at_index - return the nth of a linked list
  * @head: pointer to the head of node
  * @index: is the index of the node starting from 0
  * Return: NULL if node does not exist
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; current && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
