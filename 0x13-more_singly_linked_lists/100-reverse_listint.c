#include "lists.h"

/**
 * reverse_listint - reverse all element in a linked list
 * @head: pointer to head first node
 * Return: pointer to the first node of reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	add_nodeint(&temp2, temp->n);
	temp2->next = NULL;
	temp = temp->next;

	while (temp->next != NULL)
	{
		add_nodeint(&temp2, temp->n);
		temp = temp->next;
	}
	add_nodeint(&temp2, temp->n);
	*head = temp2;
	return (*head);
}

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
