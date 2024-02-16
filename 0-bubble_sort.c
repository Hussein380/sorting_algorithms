#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	int i, j;
	/*loop through the array*/
	for (i = 0; i < size - 1; i++)
	{
		/*inner loop to find the index of the current value*/
		for (j =0; j < size - i - 1; j++)
		{
			/*swap if the current is greater*/
			if array[j] > array[j + 1]
			{
				int *temp = *a;
				*a = *b;
				*b = *temp;
			}
			return (array[i]);
		}
	}
}
