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

		/*Traverse backward and find the insertion point*/
		while(insertion_point != NULL && insertion_point->n > current->n)
		{
			insertion_point = insertion_point->prev;
		}

		/*if insertion point is NULL current should be*/
		 /* inserted at the beginning*/
		if (insertion_point == NULL)
		{
			/*update the next pointer of the node current*/
			current->prev->next = next;
			if (next != NULL)
				next->prev = current->prev;

			/*Update pointers  to insert current at the beginin*/
			current->prev = NULL;
			current->next = *list;
			(*list)->prev = current;
			*list = current;
		}
		else
		{
			/*otherwise insert current at the insertion point*/
			current->prev->next = next;
			if (next != NULL)
				next->prev = current->prev;

			/*update pointers to insert current at the*/
			/*insertion point*/
			current->prev = insertion_point;
			current->next = insertion_point->next;

			/*update the prev pointer of node after */
			 /* insertion_point*/
			if (insertion_point->next != NULL)
				insertion_point->next->prev = current;

			/*update the next pointer of insertion_point*/
			insertion_point->next = current;
		}
		/*Move to the next node in the list*/
		current = next;
	
	}
}
