#include "main.h"
/**
 *_sqrt_check - checks for the square root of c
 *@c: number to find sqrt of
 *@m: guess at square root
 *Return: -1 or sqrt of c
 */
int _sqrt_check(int m, int c)
{
	if (m * m == c)
	{
		return (m);
	}
	else if (m * m > c)
	{
		return (-1);
	}
	return (_sqrt_check(c, m + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer to find sqrt of
 *
 *Return:  natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (sqrt_check(1, n));
}
