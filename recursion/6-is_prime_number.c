#include "main.h"

/**
 *is_prime_number - find the prime
 *@n: checked
 *Return: n
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1) /*1 and non-positive integers are not prime*/
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		/*If n is divisible by any number between 2 and sqrt(n)*/
		{
			return (0);
		}
	}

	return (1);/*If no divisors are found, it's prime*/
}
