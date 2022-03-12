#include <stdio.h>
#include <time.h>
/*More header goes there */
/**
 *main - determines if a number is positive, negative or zero
 *
 *Return: Alawys 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Here goes my code*/
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
