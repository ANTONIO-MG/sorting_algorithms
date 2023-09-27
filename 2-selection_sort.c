#include "sort.h"

/**
 * selection_sort - sortys a array according to selection sorting
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: void, no return
 */

void selection_sort(int *array, size_t size)
{
	int loop1 = 0;
	int loop2 = 1;
	int temp = 0;

	while (loop1 < (int)size - 1)
	{

		while (loop2 < (int)size)
		{
			if (array[loop2] < array[loop1])
			{
				temp = array[loop1];
				array[loop1] = array[loop2];
				array[loop2] = temp;
			}

			loop2++;
		}

		print_array(array, size);
		loop1++;
		loop2 = loop1 + 1;
	}


}
