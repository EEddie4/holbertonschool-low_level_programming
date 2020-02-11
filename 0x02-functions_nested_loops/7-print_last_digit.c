#include "holberton.h"
/**
* print_last_digit - function
* @r:first operand
*
* Description: prints last digit of a number.
* Return: Always 0 (success)
*/
int print_last_digit(int r)
{
	r = (r % 10);

	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar(r + '0');
	return (r);
}
