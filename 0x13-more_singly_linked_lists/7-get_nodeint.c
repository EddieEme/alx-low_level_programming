#include "lists.h"

/**
  * get_nodeint_at_index - function that returns
  * the nth node of a linked list
  * @head: pointer to the head of linklist
  * @index: the index of the node, starting at 0
  * Return: the nth node
  * if the node does not exist, return NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	while (current != 0)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;
		current = current->next;
	}
	return (NULL);
}
