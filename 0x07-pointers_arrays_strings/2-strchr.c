#include "holberton.h"
/**
* _strchr - function
* @s: string to search in
* @c: char to return
*
* Description: function to locate a character in a string
* Return: pointer with first c or NULL if none
*/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c && c == '\0')
		return ('\0');

	return ('\0');
}
