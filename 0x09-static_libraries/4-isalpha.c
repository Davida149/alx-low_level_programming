#include <stdio.h>
#include "main.h"
/**
 *_isalpha -  a function that checks for alphabetic character.
 *@c: c is the int to be checked if lower or upper case
 *
 *Return: returns 1 if letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);

}
