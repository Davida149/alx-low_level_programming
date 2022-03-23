#include "main.h"
/**
 *_strlen - A function that prints the length of string
 *@s: string to count
 *Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
	c++;
	}

	return (c);


}

