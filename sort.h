#ifndef SORT_H
#define SORT_H
#include <stddef.h>
/**
 * enum bool - Enumeration of Boolean values
 * @false: Equals 0
 * @true: equals 1
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
int lomuto_partition(int *array, int low, int high, size_t size);
void swap_node_forward(listint_t **head, listint_t **tail, listint_t **current);
void swap_node_backward(listint_t **head, listint_t **tail, listint_t **current);
void quick_sort_recursive(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
#endif
