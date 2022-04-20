#include "main.h"
/**
 *print_name - a function that prints name
 *@name: name to be printed
 *@f function pointer to name function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
