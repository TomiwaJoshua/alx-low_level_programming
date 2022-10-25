#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (!temp)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
