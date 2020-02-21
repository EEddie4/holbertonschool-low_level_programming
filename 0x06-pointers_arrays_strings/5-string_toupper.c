#include "holberton.h"
/**
* string_toupper - function
* @s: parameter
*
* Description:function to change all lowercase string to uppercase
* Return: char
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i >= 97 && i <= 122)
			i = (s[i] - 32);
			i++;
	}
	return (s);
}
