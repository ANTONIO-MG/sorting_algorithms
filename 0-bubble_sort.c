#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
  * bubble_sort -  sorts out a array according to bubble sorting
  * @size: the size of the array to be sorted
  * @array: the array to be sorted
  * Return: void, no return
  */

void bubble_sort(int *array, size_t size)
{
	size_t temp_num = 0;
	size_t in_loop = 0;
	size_t outter_loop = 0;

	for (; outter_loop < size; outter_loop++)
	{
		for (; in_loop < size; in_loop++)
		{
			if ((size_t)array[in_loop] == (size - 1))
				break;
			if (array[in_loop] > array[in_loop + 1])
			{
				temp_num = array[in_loop];
				array[in_loop] = array[in_loop + 1];
				array[in_loop + 1] = temp_num;
				print_array(array, size);
			}
		}
		in_loop = 0;
	}

}
