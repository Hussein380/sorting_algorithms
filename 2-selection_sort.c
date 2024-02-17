#include  "sort.h"
/**
 * swap - function that swaps the values of an array
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - function that sorts an array of integers in asxending
 * @array: array to be sorted using selection sort method
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	/*loop trhough the unsorted list*/
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		/*loop to compare adjacent value*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
