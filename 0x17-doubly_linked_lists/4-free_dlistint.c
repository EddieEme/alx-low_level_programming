#include "lists.h"

/**
  * free_dlistint - function that free list
  * @head: pointer to a node
  * Return: Nothing
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
