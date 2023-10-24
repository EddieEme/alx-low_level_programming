#include "lists.h"

/**
  * free_listint2 - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *new_node;

	if (head == NULL)
	{
		return;
	}

	while (current)
	{
		new_node = current;
		current = new_node->next;
		free(new_node);
	}
	head = NULL;
}
