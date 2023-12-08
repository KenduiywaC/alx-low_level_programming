#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @x: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *x)
{
	size_t nodes = 0;

	while (x)
	{
		nodes++;
		x = x->next;
	}

	return (nodes);
}
