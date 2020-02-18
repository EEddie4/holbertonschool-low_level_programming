#include <stdio.h>
#include "holberton.h"
/*
* swap_int - function
* @a: first operand
* @b: second operand
*
* Description: swap values of two integers
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
