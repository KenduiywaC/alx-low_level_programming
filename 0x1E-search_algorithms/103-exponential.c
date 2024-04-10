#include "search_algos.h"

/**
* @array: A pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for
* @x: the left index
* @y: the right index
* Return: The first index where value is located, or -1 if value is not present
*/

void print_array(int *array, int x, int y)
{
int i;

for (i = x; i <= y; i++)
{
printf("%d", array[i]);
if (i < y)
printf(", ");
}
printf("\n");
}

/**
* exponential_search - Searches for a value in a sorted array using exponential search
* @array: A pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for
* Return: The first index where value is located, or -1 if value is not present
*/

int exponential_search(int *array, size_t size, int value)
{
int index, prev;

if (!array || size == 0)
return (-1);

if (array[0] == value)
return (0);
for (index = 1; index <= (int) size; index = index * 2)
{
if (value <= array[index])
break;
prev = index;
printf("Value checked array[%d] = [%d]\n", index, array[index]);
}
if (index >= (int) size)
index = (int) size - 1;
printf("Value found between indexes [%d] and [%d]\n", prev, index);
index = binary_search(array + prev, index - prev + 1, value);
if (index < (int) size && index >= 0)
return (index + prev);
else
return (-1);
}

/**
* binary_search - Searches for a value in a sorted array using binary search
* @array: A pointer to the first element of the array to search
* @low: The starting index for the search
* @high: The ending index for the search
* @value: The value to search for
* Return: The index where value is located, or -1 if value is not present
*/

int binary_search(int *array, size_t size, int value)
{
int left = 0, right = (int) size - 1;

while (left <= right)
{
int mid = (left + right) / 2;

printf("Searching in array: ");
print_array(array, left, right);
if (array[mid] == value)
return (mid);
if (value <= array[mid])
right = mid - 1;
else if (value > array[mid])
left = mid + 1;
}
return (-1);
}
