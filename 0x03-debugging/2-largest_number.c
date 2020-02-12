#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	while (a > b && b > c)
	{
		largest = a;
	}
	if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}

	return (largest);
}
