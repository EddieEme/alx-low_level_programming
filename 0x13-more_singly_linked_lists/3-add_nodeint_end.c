#include "lists.h"

/**
  * add_nodeint_end - that adds a new node at
  * the end of a listint_t
  * @head: pointer to a pointer to the head of the list
  * @n: data that you want to store in the new node
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/**
	  * function add_nodeint_end(head, n):
	  * allocate memory for a new node new_node
	  * if new_node is NULL, return NULL
	  * set new_node's data to n
	  * set new_node's next to NULL
	  * if *head is NULL, set *head to new_node
	  * else:
	  * set temp to *head
	  * while temp's next is not NULL:
	  * set temp to temp's next
	  * set temp's next to new_node
	  * return new_node
	  */

	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
