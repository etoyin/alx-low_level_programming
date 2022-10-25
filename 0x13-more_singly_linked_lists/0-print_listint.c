#include "lists.h"

/**
 * print_list - print integer in a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
 **/

size_t print_listint(listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->n == NULL)
			printf("%d\n", 0);
		else
			printf("%d\n", h->n);

		h = h->next;
		node_count += 1;
	}
	printf("%d\n", h->n);
	return (node_count);
}
