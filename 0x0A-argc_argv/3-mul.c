#include <stdio.h>
#include <stdlib.h>
/**
 *main - A function that prints the multiplication of two numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: 1 if argument doesn't take two integers, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int x, y, mul;


	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
