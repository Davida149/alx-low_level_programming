#include "main.h"

/**
 *print_numbers - A function that prints numbers from 0-9
 *integer to be printed
 *Return: void
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
