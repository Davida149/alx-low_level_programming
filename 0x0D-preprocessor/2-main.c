#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints name of file this was compiled from
 *@void: accepts nothing
 *Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
