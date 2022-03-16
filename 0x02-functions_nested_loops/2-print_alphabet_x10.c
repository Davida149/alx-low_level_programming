#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - a function that prints 10 times the alphabt,in lowercase
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i < 11; i++)
	{
		for (c = 97; c < 123; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}

}
