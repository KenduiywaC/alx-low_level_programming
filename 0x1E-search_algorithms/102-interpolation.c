#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* interpolation_search - searches for a value in a sorted array of integers using the Interpolation search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first index where value is located, or -1 if the value is not present in the array or if the array is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, mid;

if (array == NULL || size == 0)
return (-1);

while (low <= high && value >= array[low] && value <= array[high])
{
mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}
mid = low + (((double) (high - low) / (array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%lu] is out of range\n", mid);
return (-1);
}
