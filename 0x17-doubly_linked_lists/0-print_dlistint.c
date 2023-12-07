#include "lists.h"

/**
  * print_dlistint - function that prints all the
  *     elements of a dlistint_t list
  * @h: node pointer
  * Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
