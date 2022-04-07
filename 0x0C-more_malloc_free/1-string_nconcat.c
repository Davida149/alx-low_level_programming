#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenate two strings up to n bytes.
 *@s1: source string
 *@s2: string to truncate up to n bytes
 *@n: number of bytes to truncate by
 *Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	int i, len1 = 1, len2 = 1, tot_len, k, l, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		len1 = len1 + i;
	}
	for (i = 0; i <= n; i++)
	{
		len2 = len2 + i;
	}
	tot_len = len1 + len2 + 1;


	ptr = malloc(sizeof(char) * tot_len);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < tot_len; j++)
	{
		if (*(s1 + k) != '\0')
		{
			*(ptr + j) = *(s1 + k);
			k++;
		}
		else if (*(s1 + k) == '\0' && *(s2 + l) != '\0')
		{
			*(ptr + j) = *(s2 + l);
			l++;
		}
		*(ptr + j) = '\0';
	}
	return (ptr);
}
