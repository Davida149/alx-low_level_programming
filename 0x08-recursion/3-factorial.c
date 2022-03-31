#include "main.h"
/**
 *factorial - prints the factorial of an integer
 *@n: integer to be worked on
 *
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
