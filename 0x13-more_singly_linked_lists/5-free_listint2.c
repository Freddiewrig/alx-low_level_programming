#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
