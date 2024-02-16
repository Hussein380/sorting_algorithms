#include "sort.h"
#include <stddef.h>
/**
 * bubble_sort - function to that sorts array of integers using bubble sort
 * @array: the array to be sorted
 * @size: size  of the array
 * Return: returns the sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	/*check if the array is null or its size is less than2*/
	/*return as the array is aklready sorted*/
	if (array == NULL || size < 2)
		return;

	/*loop through the array to second last*/
	for (i = 0; i < size - 1; i++)
	{
		/*inner loop to compare the adjacent elements and swap*/
		for (j =0; j < size - i - 1; j++)
		{
			/*swap if the current is greater*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
