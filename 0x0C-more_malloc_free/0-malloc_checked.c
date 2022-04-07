#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocates memory using malloc
 * @b: size of buffer
 *
 *
 *Return: pointer to buffer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(*ptr) * b);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		return (NULL);
		_putchar('98');
	}

}
