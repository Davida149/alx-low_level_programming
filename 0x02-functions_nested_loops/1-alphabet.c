#include <stdio.h>
#include "main.h"
/**
 *main - a function that prints the alphabet, in lowercase, followed by \n.
 *
 *
 *
 *Return: 0
 */

int main(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
