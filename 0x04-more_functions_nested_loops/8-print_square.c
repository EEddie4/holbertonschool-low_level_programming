#include "holberton.h"
/**
* print_square - function
* @size: first operand
*
* Description: prints a square, followed by a new line
* Return: Always 0 (success)
*/
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar('#');
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			_putchar(10);
		}
		_putchar(10);
	}
}
