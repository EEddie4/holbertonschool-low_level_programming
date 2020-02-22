#include "holberton.h"
/**
* rot13 - function
* @alpha: alphabet string
* @cipher: rot13 cipher
* @s: operand
*
* Description: Encodes a string using rot13
* Return: s
*/
char *rot13(char *alpha, char *cipher, char *s)
{
	int i, j;

	alpha[53];
	cipher[53];

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		if (s[i] == alpha[j])
		{
			s[i] = cipher[j];
		}
		return (s);
	}
}
