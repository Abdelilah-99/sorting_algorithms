#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, j;
	int tmp;

	/* Check if the array is NULL or has less than 2 elements */
	if (!array || size < 2)
		return;
	/* Loop through the array */
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		/* Find the minimum element in the unsorted part of the array */
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		/* Swap the minimum element with the element at the current position 'i' */
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
