#include "holberton.h"
/**
* rev_string - function
* @s: first operand and array size
*
* Description: function to reverses a string
* Return: string
*/
void rev_string(char *s)
{
	int i;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
