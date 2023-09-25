#include "lists.h"
/**
 * pop_listint - delete head node from a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempr;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	tempr = (*head)->next;
	free(*head);
	*head = tempr;

	return (count);
}
