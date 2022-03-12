#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Determines either greater than 5 is less than 6 or is 0
 *
 *Return: Alawys 0 (Success)
 */

int main(void)

{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n, l);
	}
	else
	{
	printf("Last digit of %d id %d and is and is less than 6 and not 0\n", n, l);
	}
/* your code goes there */
	return (0);

}
