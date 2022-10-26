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
