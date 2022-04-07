#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof (*ptr) * b);
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
