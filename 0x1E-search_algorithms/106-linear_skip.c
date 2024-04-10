#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_skip - searches for a value in a sorted skip list of integers
* @list: pointer to the head of the skip list to search in
* @value: the value to search for
* Return: pointer to the node where value is located, or NULL if the value is not present in the list or if head is NULL
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
return (NULL);

express = list;
while (express)
{
current = express;
if (express->express == NULL || express->express->n >= value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);
break;
}
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
express = express->express;
}

while (current)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n == value)
return (current);
if (current->n > value)
break;
current = current->next;
}

return (NULL);
}
