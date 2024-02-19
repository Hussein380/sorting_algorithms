#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: Pointere to the first integer
 * @b: Pointer to the second integer
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - Partition the array using lomuto partiton scheme
 * @array: The array to be sorted
 * @low: Starting index of the partiton to be sorted
 * @high: Ending index of the partiton to be sorted
 * @size: size of the array
 *
 * Return: Index of the pivot element after partitioning
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}
/**
 * quick_sort_recursive - Recursive sorts the array using Quick soert algo
 * @array: the array to be sorted
 * @low: Starting index of the partiton sorted
 * @high: Ending index of the partiton sorted
 * @size: size of the array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pi;

	if (high - low > 0)
	{
		pi = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers in asceding ord
 * @array: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
