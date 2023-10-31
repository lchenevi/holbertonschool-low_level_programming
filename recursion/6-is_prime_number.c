#include "main.h"

/**
 *is_prime_recursive - find the prime
 *@n: checked
 *@divisor: checked
 *Return: n
*/
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return 0;/*1 and non-positive integers are not prime*/
	}
	if (divisor == 1)
	{
		return 1;/*Base case: n is prime*/
	}
	if (n % divisor == 0)
	{
		return 0;
		/*n is divisible by a number other than 1, not prime*/
	}

	return is_prime_recursive(n, divisor - 1);
}

/**
 *is_prime_number - find the prime
 *@n: checked
 *Return: n
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}

	/*Start the recursive function with divisor = n - 1*/
	return is_prime_recursive(n, n - 1);
}
