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
	size_t m, n, sze = size;
	int tmp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (m = 0; m < size; m++)
	{
		for (n = 1; n < sze; n++)
		{
			if (array[n - 1] > array[n])
			{
				flag = 1;
				tmp = array[n];
				array[n] = array[n - 1];
				array[n - 1] = tmp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		sze--;
	}
}
