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
	int a, b, mj, temp, m = (int)size;

	if (!array || size < 2)
		return;

	for (a = 0; a < m - 1; a++)
	{
		mj = a;
		for (b = a + 1; b < m; b++)
		{
			if (array[b] < array[mj])
			{
				mj = b;
			}
		}
		if (mj != a)
		{
			temp = array[a];
			array[a] = array[mj];
			array[mj] = temp;
			print_array(array, size);
		}
	}
}
