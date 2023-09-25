#include "lists.h"
/**
 * sum_listint - gives the sum of all data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempr = head;

	while (tempr)
	{
		sum += tempr->n;
		temp = tempr->next;
	}

	return (sum);
}
