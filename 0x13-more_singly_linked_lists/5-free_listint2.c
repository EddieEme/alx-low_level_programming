#include "lists.h"

/**
  * free_listint2 - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	/*listint_t *new_node;*/

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
