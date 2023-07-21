#include "sort.h"
void swap(int *array, int item1, int item2)
/**
 * shell_sort: This function will sort the integer in increasing order.
 * @size: size of the array
 * @array: list with numbers
 * Authors: MikiasHailu and YaredTsgie
 * project: Shell
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, m, index = 0;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	{
		for (m = gap; m < size; m++)
			for (index = m; index >= gap &&
					(array[index] < array[index - gap]);
					index -= gap)
				swap(array, index, index - gap);
		print_array(array, size);
		gap /= 3;
	}
}

/**
 * swap: This fucntion will swap the items in array.
 * @array: This represents the array
 * @item1: This is the array element
 * @item2: This is the array element
 * Authors: MikiasHailu and YaredTsgie
 * project: Swap
 */
void swap(int *array, int item1, int item2)
{

	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
