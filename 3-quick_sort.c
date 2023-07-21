#include "sort.h"
/**
 * quick_sort: This will sort undergo the quick sort.
 * @array: This represents the array.
 * @size: This representst the size of an array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort_2(array, 0, size - 1, size);
}

/**
 * swap: This fucntion will swap the items in array.
 * @array: This represents the array
 * @item1: This is the array element
 * @item2: This is the array element
 * Authors: MikiasHailu and YaredTsgie
 * project: Swap
 */
void swap(int *array, size_t item1, size_t item2)
{
	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
 * L_part: This function will partition the sorting.
 * @size: This represents the size array
 * @array: This represents the array.
 * @first: This represents the first ele
 * @last: This represents the last ele
 * Authors: MikiasHailu and YaredTsgie
 * project: Partition
 */
int L_part(int *array, size_t first, size_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current);
}
/**
 * quicksort_2: This function will represents the qucksort algorithm.
 * @size: This represents the size array
 * @array: This represents the array.
 * @first: This represents the first ele
 * @last: This represents the last ele
 * Authors: MikiasHailu and YaredTsgie
 * project: Sort
 */
void quicksort_2(int *array, size_t first, size_t last, int size)
{
	ssize_t position = 0;

	if (first < last)
	{
		position = L_part(array, first, last, size);

		quicksort_2(array, first, position - 1, size);
		quicksort_2(array, position + 1, last, size);
	}
}

