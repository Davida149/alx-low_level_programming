#include "main.h"
/**
 *_prime_check - a function that checks a guess value
 *@i: integer to be collected
 *@k: guess integer to be checked
 *
 *Return: _prime_check function
 */
int _prime_check(int i, int k)
{
	if (i == k)
	{
		return (1);
	}
	else if ((i % k) == 0)
	{
		return (0);
	}
	return (_prime_check(i, (k + 1)));

}

/**
 *is_prime_number - a function that returns 1 if an intrger is prime
 *@n: integer to be checked
 *
 *Return: 1 or prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n >= 1)
	{
		return (1);
	}
	return (_prime_check(n, 2));
}
