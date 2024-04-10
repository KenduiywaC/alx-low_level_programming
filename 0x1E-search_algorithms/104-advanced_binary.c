#include <stdio.h>
#include "search_algos.h"

/**
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* @x: the left index
* @y: the right index
* Return: The index where the value is located.-1 if the value is not present or the array is NULL.
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

int binary_recurtion(int *array, int left, int right, int value);

/**
* advanced_binary - Searches for a value in a sorted array of integers.
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where the value is located. -1 if the value is not present or the array is NULL.
*/

int advanced_binary(int *array, size_t size, int value)
{
if (!array || size == 0)
return (-1);
return (binary_recurtion(array, 0, (int) size - 1, value));
}

/**
* binary_recurtion - Searches or a value in an array of integers using the binary search algorithm in recursion way
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where the value is located. -1 if the value is not present or the array is NULL.
*/

int binary_recurtion(int *array, int left, int right, int value)
{
int mid = (left + right) / 2;

printf("Searching in array: ");
print_array(array, left, right);
if (left >= right)
return (-1);
if (array[mid] == value)
{
if (array[mid - 1] != value)
return (mid);
else
return (binary_recurtion(array, left--, mid, value));
} 
else if (value < array[mid])
return (binary_recurtion(array, left, mid - 1, value));
else
return (binary_recurtion(array, mid + 1, right, value));
}
