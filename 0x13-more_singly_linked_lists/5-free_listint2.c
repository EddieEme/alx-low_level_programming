#include "lists.h"

/**
  * free_listint2 - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *new_node = *head;

	if (head == NULL)
	{
		return;
	}

	while (curren != NULL)
	{
		current = *head;
		*head = new_node->next;
		free(current);
	}
	*head = NULL;
}
