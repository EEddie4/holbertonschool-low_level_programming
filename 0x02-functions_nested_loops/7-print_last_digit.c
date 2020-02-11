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
	int i;

	if (i < '0')
	{
		r = i % 10;
		_putchar(r + '0');
		return (r);
	}
	else if (i > '0')
	{
		r = i % 10;
		_putchar(r + '0');
		return (r);

	}
	else
	{
		i = i * -1;
		i = r % 10;
		_putchar(r + '0');
		return (r);
	}
	return (0);
}
