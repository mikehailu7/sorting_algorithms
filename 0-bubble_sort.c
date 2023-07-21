#include "sort.h"

/**
 * bubble_sort: This funciton will sort array in increasing order.
 * @size: This one is the size of the array.
 * @array: This one represents the array it self.
 * Authors: MikiasHailu and YaredTsgie
 * project: BubbleSort
 */
void bubble_sort(int *array, size_t size)
{

	size_t a, index, tmp = 0;
	if (size < 2)
		return;
	for (a = 0; a < size; a++)
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				print_array(array, size);
			}
		}
}
