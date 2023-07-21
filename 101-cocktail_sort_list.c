#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list: This fucntion will implemnt sort.
 * @list: This will represent the list
 * Authors: MikiasHailu and YaredTsgie
 * project: cocktail_sort_list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node;
	int s_list = 1;

	if (list == '\0' || (*list) == '\0' || (*list)->next == '\0')
		return;
	node = *list;
	while (s_list == 1)
	{
		s_list = 0;
		while (node->next)
		{
			if (node->n > node->next->n)
			{
				node = swap_node(node->next, list);
				s_list = 1;
				print_list(*list);
			}
			node = node->next;
		}
		if (s_list == 0)
			break;
		s_list = 0;
		while (node->prev)
		{
			if (node->n < node->prev->n)
			{
				node = s_list(node, list);
				s_list = 1;
				print_list(*list);
			}
			else
				node = node->prev;
		}
	}
}

/**
 * swap_node: This function will swap a node.
 * @node: This represent the node
 * @list: This represent the list
 * Authors: MikiasHailu and YaredTsgie
 * project: Swap
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

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
