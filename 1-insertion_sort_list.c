#include "sort.h"
#include <stdlib.h>

/**
 * insertion_sort_list - Function that sorts doubly linked list of integers
 * @list: list to be dorted into doubly linked list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point, *next;

	/*Nothing to sort if the list is empty or has only one node*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	/*start from the second node*/
	current = (*list)->next;
	while (current != NULL)
	{
		/*save the next node before moving the current*/
		next = current->next;
		/*start looking for insertion point from the end oflist*/
		insertion_point = current->prev;
		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			insertion_point = insertion_point->prev;
		}
		if (insertion_point == NULL)
		{
			current->prev->next = next;
			if (next != NULL)
				next->prev = current->prev;
			current->prev = NULL;
			current->next = *list;
			(*list)->prev = current;
			*list = current;
		}
		print_list(*list);
		else
		{
			current->prev->next = next;
			if (next != NULL)
				next->prev = current->prev;
			current->prev = insertion_point;
			current->next = insertion_point->next;
			if (insertion_point->next != NULL)
				insertion_point->next->prev = current;
			insertion_point->next = current;
		}
		print_list(*list);
		current = next;
	}
}
