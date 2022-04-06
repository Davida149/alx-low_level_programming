#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates space for heap and assigning a character to it
 *@size: unsigned int
 *@c:string of character to be inputed
 *
 *Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
