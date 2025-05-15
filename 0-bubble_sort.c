#include "sort.h"
/**
 * swap - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *i, int *j)
{
int temp = *i;
*i = *j;
*j = temp;
}

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
int i, j, new_j;

if (array == NULL || size < 2)
{
return;
}

j = size;
while (j > 0)
{
for (i = 0; i < j - 1; i++)
{
if (array[i] > array[i + 1])
{
swap(&array[i], &array[i + 1]);
new_j = i + 1;
print_array(array, size);
}
}
j--;
}
}
