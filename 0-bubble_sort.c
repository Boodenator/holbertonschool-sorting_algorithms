#include "sort.h"

/**
 * bubble_sort - sorting the array of integers into ascending order by the
 * Bubble sort algorithm
 * @array: Sorted Array
 * @size: Array Size
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i;

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
array[i] = array[i + 1];
}
}
}
