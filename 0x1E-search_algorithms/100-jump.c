#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the @array
* @value: Value to search for
* Return: The index where @value is located, or -1 if @value is not present in @array
*/

int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size); /* Jump step */
size_t prev = 0; /* Previous step index */

if (array == NULL)
return (-1);

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
while (array[min(step, size) - 1] < value)
{
prev = step;
step += sqrt(size);
if (prev >= size)
return (-1);
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

while (array[prev] < value)
{
prev++;
if (prev == min(step, size))
return (-1);
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

if (array[prev] == value)
return (prev);

return (-1);
}
