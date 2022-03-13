#include<stdio.h>
/**
 *main - prints all possible combination of single digit numbers
 *
 *Return: Alawys 0 (Success)
 */
int main(void)
{
int a;

for (a = 49; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}
