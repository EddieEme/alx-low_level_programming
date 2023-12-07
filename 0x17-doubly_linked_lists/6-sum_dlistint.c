#include "lists.h"

/**
  * sum_dlistint - sum the data(n) of a linked list
  * @head: pointer to the head of node
  * Return: 0 always successful
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
