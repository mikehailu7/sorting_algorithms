#include <stdlib.h>
#include <stdio.h>

/**
 * print_array: This will Prints an array of integers
 * Authors: MikiasHailu and YaredTsgie
 * project: Print array
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void p_array(const int *array, size_t size)
{
	size_t a;

	a = 0;
	while (array && a < size)
	{
		if (a > 0)
			printf(", ");
		printf("%d", array[a]);
		++a;
	}
	printf("\n");
}
