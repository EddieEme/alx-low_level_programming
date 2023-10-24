#include "lists.h"

/**
  * reverse_listint - function that reverses a linked list
  * @head: pointer to pointer to a node
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;

	while (current != NULL)
	{
		listint_t *next;

		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
