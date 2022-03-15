#include <stdio.h>
#include <stdlib.h>

/**
 *main - A program that prints all possible dfrnt combntn of three digits.
 *The three digits must be different
 *Print only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *
 *Return: Alawys 0 (Success)
 */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			for (num3 = 2; num3 <= 9; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 == 8 && num2 == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}

			}

		}

	}

	putchar('\n');
	return (0);
}
