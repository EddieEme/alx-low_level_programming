#include "lists.h"

/**
  * delete_nodeint_at_index - that deletes the node
  * at index index of a listint_t linked list
  * @head: pointer to pointer of the node
  * @index: index of the node that should be deleted
  * Return: 1 if succeeded, -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;
	listint_t *previous_node;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	current_node = *head;
	previous_node = NULL;

	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
		{
			return (-1);
		}
		previous_node = current_node;
		current_node = current_node->next;
	}
	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}
