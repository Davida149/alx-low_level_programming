#include "main.h"

/**
 *print_numbers - A function that prints numbers from 0-9
 *integer to be printed
 *
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
