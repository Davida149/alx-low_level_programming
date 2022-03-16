#include <stdio.h>
#include <stdlib.h>
/**
 *_abs - computes absolute value of a number
 *@i: number to be converted to absolute value
 *
 *Return: the number converted to absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}

}
