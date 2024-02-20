#include "sort.h"
#include <stddef.h>

#include "swap.h"

/**
 * swap - sort an array of integers in  an array
 * @a: The first integer to swap
 * @b: the second integer to swap
 *
 */
void swap(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - function to that sorts array of integers using bubble sort
 * @array: the array to be sorted
 * @size: size  of the array
 * Return: returns the sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool bubbly = false;

	/*check if the array is null or its size is less than2*/
	/*return as the array is aklready sorted*/
	if (array == NULL || size < 2)
		return;

	/*loop through the array to second last*/
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < size - 1; i++)
		{
			/*swap if the current is greater*/
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);

				print_array(array, size);
				bubbly = false;
			}
		}
		size --;
	}
}
