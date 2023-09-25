#include "lists.h"
/**
 * get_nodeint_at_index - gives back the node in certain index in list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tempr = head;

	while (tempr && n < index)
	{
		tempr = tempr->next;
		n++;
	}

	return (tempr ? tempr : NULL);
}
