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

	i = (r % 10);

	if (i < 0)
	{
		_putchar(i * -1);
		_putchar(i + '0');
	}
	else
	{
		_putchar(i + '0');
		return (0);
	}
	return (0);
}
