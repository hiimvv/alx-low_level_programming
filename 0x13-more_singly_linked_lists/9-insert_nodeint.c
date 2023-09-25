#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new;
	listint_t *tempr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (c = 0; tempr && c < idx; c++)
	{
		if (c == idx - 1)
		{
			new->next = tempr->next;
			tempr->next = new;
			return (new);
		}
		else
			tempr = tempr->next;
	}

	return (NULL);
}
