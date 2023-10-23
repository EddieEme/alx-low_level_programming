#include "lists.h"

/**
  * listint_len - that returns the number of
  * elements in a linked listint_t list
  * @h: pointer to head
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
