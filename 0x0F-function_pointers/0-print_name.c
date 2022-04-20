#include "main.h"
#include <stdlib.h>
/**
 *print_name - a function that prints name
 *@name: name to be printed
 *@f function pointer to name function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	/*check if name and f are not null*/
	if (name && f)
	{
		f(name);
	}
}
