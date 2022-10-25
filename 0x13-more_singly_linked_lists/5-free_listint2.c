#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 * @head: pointer to the first node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head != NULL)
	{
		/*set head addr to current*/
		curr = *head;

		/*iterate through the whole list*/
		/*while setting the current node to temp*/
		while ((temp = curr) != NULL)
		{
			/*set next node to curretnt*/
			curr = curr->next;
			/*free temp, that is the current node*/
			free(temp);
		}

		*head = NULL;
	}
}
