#include "lists.h"

/**
 * listint_len - return the length of the elements
 * @h: pointer to head first node
 * Return: Number of nodes
 **/

size_t listint_len(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{

		h = h->next;
		node_count++;
	}
	return (node_count);
}
