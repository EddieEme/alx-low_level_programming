#include "lists.h"

/**
  * free_listint - function that free the list
  * @head: pointer to the head of list
  * Return: nothing
  */

void free_listint(listint_t *head)
{
        listint_t *current = head;

        while (current != NULL)
        {
                listint_t *next_node = current->next;

                free(current);
                current = next_node;
        }
}
