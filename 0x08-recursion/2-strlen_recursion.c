#include "main.h"
/**
 *_strlen_recursion - a function that prints length of string
 *@s: string to be printed
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	len++;
	return (len);
}
