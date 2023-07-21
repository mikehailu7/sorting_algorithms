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
	size_t i, j, size2 = size;
	int tmp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size2; j++)
		{
			if (array[j - 1] > array[j])
			{
				flag = 1;
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		size2--;
	}
}
