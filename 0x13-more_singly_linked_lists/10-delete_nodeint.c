#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in linked list at a specific index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempr = *head;
	listint_t *current = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempr);
		return (1);
	}

	while (n < index - 1)
	{
		if (!tempr || !(tempr->next))
			return (-1);
		tempr = tempr->next;
		n++;
	}


	current = tempr->next;
	tempr->next = current->next;
	free(current);

	return (1);
}
