#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: pointer to head
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
