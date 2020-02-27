#include "holberton.h"
/**
* is_prime_number - function
* @n: integer to check for prime
*
* Description: checks for prime number
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	int c = 2;

	if (c <= n - 1)
	{
		if (n % c == 0 || n <= 1)
		{
			return (0);
		}
	}
	if (c == n || c * c > n)
	{
		return (1);
	}
	c++;
	return (is_prime_number(n + 1));
}
