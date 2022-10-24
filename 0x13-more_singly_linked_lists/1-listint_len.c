#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}

	return (num);
}
