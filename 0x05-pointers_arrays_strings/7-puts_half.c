#include "holberton.h"
/**
* puts_half - function
* @str: string operand
*
* Description: prints half of a string
* Return: string
*/
void puts_half(char *str)
{
int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		_putchar(*str);
		str++;
	}
	else
	{
	}
	_putchar(10);
	}
