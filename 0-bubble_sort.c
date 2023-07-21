#include "sort.h"
void swap(int *a, int *b);

/**
 * swap: This function ill swap two pointers to integer
 * Authors: MikiasHailu and YaredTsgie
 * project: BubbleSort
 */
void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * bubble_sort: This funciton will sort array in increasing order.
 * @size: This one is the size of the array.
 * @array: This one represents the array it self.
 * Authors: MikiasHailu and YaredTsgie
 * project: BubbleSort
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int m = 0, n = 0;

	if (size <= 1)
		return;

	for (m = 0; m < (size - 1); m++)
		for (n = 1; n < size; n++)
			if (array[n - 1] > array[j])
			{
				swap(&array[n - 1], &array[n]);
				print_array(array, size);
			}
}
