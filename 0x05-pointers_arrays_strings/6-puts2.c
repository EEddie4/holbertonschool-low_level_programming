#include "holberton.h"
/**
* puts2 - function
* @str: string operand
*
* Description: print every other char of a string starting with 1stw/ \n
* Return: string
*/
void puts2(char *str)
{

	int i = 0;
/*	int d;*/

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
	/*	i = i / 2;*/
		_putchar(*str);
		str++;
	}
	else
	{
	/*	d = str[i] - 1 / 2;*/
	}
	_putchar(10);
}
