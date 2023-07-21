#include "sort.h"
/**
 * selection_sort: This is a function that sorts an array of integers in increasing order.
 * @array: This is the list with numbers
 * @size: This is the size of the array
 * Authors: MikiasHailu and YaredTsgie
 * project: SelectionSort
 */
void selection_sort(int *array, size_t size)
{
	size_t m, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (m = 0; m < size; m++)
	{
		tmp = m;
		flag = 0;
		for (index = m + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag = flag + 1;
			}
		}
		swap = array[m];
		array[m] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
