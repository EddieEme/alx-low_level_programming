#include "lists.h"

/**
  * free_listint2 - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);

		*head = NULL;
	}
}
