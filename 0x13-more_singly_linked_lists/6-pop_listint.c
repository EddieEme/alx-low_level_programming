#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a list
  * @head: pointer to pointer to the head of a list
  * Return: if the linked list is empty return 0
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_node = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		data = new_node->n;
		new_node = new_node->next;
	}
	return (data);
}
