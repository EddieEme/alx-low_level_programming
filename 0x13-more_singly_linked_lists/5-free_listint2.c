#include "lists.h"

/**
  * free_listint2 - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		free(current);
		current = next_node;
	}
	*head = NULL;
}
