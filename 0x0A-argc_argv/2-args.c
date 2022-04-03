#include <stdio.h>
/**
 *main - a function that prints all the arguments pased to it
 *@argc: argument count
 *@argv: argument vector to the pointer string
 *Return: always void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
