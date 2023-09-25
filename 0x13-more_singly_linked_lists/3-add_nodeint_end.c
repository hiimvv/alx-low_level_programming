#include "lists.h"
/**
 * add_nodeint_end - addition of a node at the end of a linked list
 * @head: pointer to the first element in the linked list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addition;
	listint_t *tempr = *head;

	addition = malloc(sizeof(listint_t));
	if (!addition)
		return (NULL);

	addition->n = n;
	addition->next = NULL;

	if (*head == NULL)
	{
		*head = addition;
		return (addition);
	}

	while (tempr->next)
		tempr = tempr->next;

	tempr->next = addition;

	return (addition);
}
