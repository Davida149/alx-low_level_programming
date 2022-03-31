#include "main.h"
/**
 *_pow_recursion - fnctn that rtrns the value of x raisd to the power of y
 *@x: base
 *@y: index
 *Return: vale of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x *  _pow_recursion(x, (y - 1)));
}
