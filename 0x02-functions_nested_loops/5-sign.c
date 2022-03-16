#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks if num is positive, neg or zero and prints sign
 *@n: n is the number to be checked if positive or neg or 0
 *
 *Return: 1 if positive, -1 if neg and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
		_putchar('\n');

}
