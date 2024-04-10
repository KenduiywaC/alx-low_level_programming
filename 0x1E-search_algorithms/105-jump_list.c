#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted list of integers using Jump search algorithm.
* @list: Pointer to the head of the list to search in.
* @size: Number of nodes in the list.
* @value: Value to search for.
* Return: If value is not present in head or head is NULL, return NULL.Otherwise, return a pointer to the first node where value is located.
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
listint_t *curr = list, *prev = NULL;
size_t jump = sqrt(size), prev_index = 0;

if (list == NULL)
return (NULL);

while (curr->next != NULL && curr->n < value)
{
prev = curr;
prev_index += jump;
while (curr->next != NULL && curr->index < prev_index)
curr = curr->next;
printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
}
printf("Value found between indexes [%lu] and [%lu]\n", prev_index - jump, curr->index);
printf("Value checked at index [%lu] = [%d]\n", prev_index - jump, prev->n);
printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
while (prev != NULL && prev->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
prev = prev->next;
}
if (prev == NULL)
return (NULL);

printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
return (prev);
}
