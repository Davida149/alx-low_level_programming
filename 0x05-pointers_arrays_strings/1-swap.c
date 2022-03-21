#include "main.h"
/**
 *swap_int - a function that swaps two numbers
 *temp: a variable of integer data type that holds data tempoarily
 *@a: First integer
 *@b: Second integer
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
