#include "sort.h"
void insertion_sort_list(listint_t **list);
/**
 * swap_node: This fucntion will swap a node.
 * @node: This is the node.
 * @list: This is the node list.
 * Authors: MikiasHailu and YaredTsgie
 * project: swap_node
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}

/**
 * insertion_sort_list: This function is insertion sort of double linked list in increasing order.
 * @list: This is the double link list that is going to be sorted.
 * Authors: MikiasHailu and YaredTsgie
 * project: InsertionSort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
