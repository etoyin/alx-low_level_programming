#include "lists.h"

/**
 * print_listint - print integer in a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		node_count++;
	}
	printf("%d\n", h->n);
	return (node_count);
}
