#include "holberton.h"
/**
* _strspn - function
* @s: return num bytes of
* @accept: bytes from
*
* Description: function to get through length of prefix substring
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;

	for (i = 0; s[i]; i++)

	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[i])
		{
			counter++;
			break;
		}
		else if (*s != *accept && *s == '\0')
			return (s);
	}
	return (counter);
}
