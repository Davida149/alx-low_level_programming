#include "main.h"
/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *@c: the integer to be checked
 *Return: returns 1 if an integer 0 0therwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);

}
