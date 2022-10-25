#include "lists.h"

/**
 * add_nodeint - return the length of the elements
 * @head: pointer to head first node
 * @n: element to be added
 * Return: Number of nodes
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
		temp->next = NULL;
	else
		temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
