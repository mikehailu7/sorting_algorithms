#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s: This sturcure is a Doubly linked list node
 * @n: This represents integer stored in the node Integer stored in the node
 * @prev: This represents a pointer to the previous element of the list
 * @next: This represents a Pointer to the next element of the list
 * Authors: MikiasHailu and YaredTsgie
 * project: Swap
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
listint_t *swap_node(listint_t *node, listint_t **list);
void quick_sort_hoare(int *array, size_t size);
void p_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

#endif
