#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - runs through the array and use the function pointer
 *@array: pointer to array where elements are
 *@size: number of elements in array
 *@cmp: function pointer
 *Return: -1 if 0 else ind
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, idx = 0;
	/*setting the requirements*/
	if (size <= 0)
		return (-1);
	if (size && cmp)
	{	/*go through the loop and use the function pointer*/
		for (i = 0; i < size; i++)
		{
			idx = cmp(array[i]);/*adding the return value*/
			if (idx == 1)/*checks for the first true element*/
				return (i);
		}
	}
	/*return (-1);if program comes here, it means functions are not true*/
}
