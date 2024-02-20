#include "sort.h"
/**
 * swap_node_forward - swap a node with the next node in a doubly linked list
 * @head: A pointer to the head of doubly linked list
 * @tail: a poi nter to the tail of the doubly linked list
 * @current: A pointer to the current node being considered
 */
void swap_node_forward(listint_t **head, listint_t **tail, listint_t **current)
{
	/*store th next node*/
	listint_t = *next_node = (*current)->next;

	/*update the previous nodes's next pointer*/
	if ((*current)->prev != NUll)
		(*current)->prev->next = next_node;
	else
		*head = next_node;

	/*Update the next node's previous pointer*/
	next_node->prev = (*current)->prev;

	/*update current node's next pointer*/
	(*current)->next = next_node_>next;

	/*update the next node's next [pointer*/
	if (next_node->next != NULL)
		next_node->next->prev = *current;
	else
		*tail = *current;
	/*Update current's nodes previous pointer*/
	(*current)->prev = next_node;
	/*update the next nodes's pointer*/
	next_node->next = *current;

	/*current = next_node*/
	*current = next_node;
}

/**
 * swap_node_backward - swap a node with previous node in a doubly linked list
 * @head: A pointer to the head of the doubly linked list.
 * @tail: A pointer to the tail of the douly linked list
 * @current: A pointer to the current node being considered
 */

void swap_node_backward(listint_t **head, listint_t **tail, listint_t **current)
{
	/*store th previous node*/
	listint_t = *prev_node = (*current)->next;
	
	/*update the next nodes's prev pointer*/
	if ((*current)->next != NUll)
		(*current)->next->prev = prev_node;
	else
		*tail = prev_node;
       	/*Update the previous node's next pointer*/
	prev_node->next = (*current)->next;
	/*update current node's previous pointer*/
	(*current)->prev = prev_node_>prev;
	
	/*update the previous node's next pointer*/
	if (prev_node->prev != NULL)
		prev_node->prev->next = *current;
	else
		*tail = *current;
	/*Update current's nodes next pointer*/
	(*current)->next = prev_node;
	/*update the next nodes's pointer*/
	next_node->prev = *current;

	/*Update current pointer to point to previous node*/
	*current = prev_node;
}
