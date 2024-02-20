#include "sort.h"
#include <stdlib.h>

/**
 * swap_nodes -swap two nodes in a listint_t doubly linked list
 * @head: A pointer to the head of the doubly linked list
 * @node1: A pointet to first node swap
 * @node2: The second node to swap
 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - Function that sorts doubly linked list of integers
 * @list: list to be dorted into doubly linked list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		insertion_point = current->prev;

		while (insertion_point != NULL && current->n < insertion_point->n)
		{
			swap_nodes(list, &insertion_point, current);
			print_list((const listint_t *)*list);
		}
	}
}
