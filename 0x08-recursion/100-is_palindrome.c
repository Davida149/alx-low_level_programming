#include "main.h"
/**
 *len_str - function to print length of string
 *@str: pointer to string to get length
 *
 *Reeturn: length of string
 */
int len_str(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + (len_str(str + 1)));
}

/**
 *_palindrome_check - checks if the string is same back and forth
 *@sr: guess string to be checked
 *@j: increment operator
 *@lent: length of the string str
 *Return: 0 if not pallindrome, 1 if pallindrome
 */
int _palindrome_check(char *sr, int j, int lent)
{
	if (sr[j] != sr[lent - 1 - j])
	{
		return (0);
	}
	else if (j == (lent / 2))
	{
		return (1);
	}
	return (_palindrome_check(sr, (j + 1), lent));

}
/**
 *is_palindrome - checks if a sring is same when checked foward & backward
 *@s: pointer to the string to be checked
 *
 *Return: 0 if not palindrome, 1 if palindromre
 */
int is_palindrome(char *s)
{
	int i = 0;

	int len = len_str(s);

	return (_palindrome_check(s, i, len));
}

