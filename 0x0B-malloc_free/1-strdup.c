#include "main.h"
#include <stdlib.h>
/**
 *_strdup - duplicates strings specified
 *@str: pointer to string
 *
 *
 *Return: ptr
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j;

	char *ptr

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	i++;
	ptr = (char *)malloc(i + sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; *(str + i) != '\0'; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}
