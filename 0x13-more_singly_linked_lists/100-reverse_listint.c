#include "lists.h"
/**
 * reverse_listint - reverses last node in linked list
 * @head: pointer to the first node in the list
 * Return: pointer to first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;

	return (*head);
}
