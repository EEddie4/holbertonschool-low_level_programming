#include "holberton.h"
/**
* reverse_array - function
* @a: array operand
* @n: number of elements of the array
*
* Description: reverse content of an array
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, rev;

	i = 0;
	rev = 1;

	while (a[i] && i < n)
	{
		i++;
	}

	while (--i > rev)
	{
		int front = a[rev];
		int back = a[i];

		a[rev] = back;
		rev++;
		a[i] = front;
	}
}
