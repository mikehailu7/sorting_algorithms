#include <stdio.h>
#include "sort.h"

/**
 * print_list: This funciton will Prints a list of integers
 * @list: This represents the list
 * Authors: MikiasHailu and YaredTsgie
 * project: Print array
 */
void print_list(const listint_t *list)
{
	int a;

	a = 0;
	while (list)
	{
		if (a > 0)
			printf(", ");
		printf("%d", list->n);
		++a;
		list = list->next;
	}
	printf("\n");
}
