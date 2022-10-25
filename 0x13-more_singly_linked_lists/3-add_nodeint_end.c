#include "lists.h"

/**
 * add_nodeint - return the length of the elements
 * @head: pointer to head first node
 * @n: element to be added
 * Return: Number of nodes
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
