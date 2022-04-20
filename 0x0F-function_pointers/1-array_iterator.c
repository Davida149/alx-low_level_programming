#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - it sets functions to array
 *@array: pointer to array
 *@size: array size
 *@action:function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
