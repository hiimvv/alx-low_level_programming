#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to the first node in the linked list
 * Return: number element proccessed in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int count;
	listint_t *toggle;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		count = *h - (*h)->next;
		if (count > 0)
		{
			toggle = (*h)->next;
			free(*h);
			*h = toggle;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
