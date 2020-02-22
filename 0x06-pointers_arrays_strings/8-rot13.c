#include "holberton.h"
/**
* rot13 - function
* @s: operand
*
* Description: Encodes a string using rot13
* Return: s
*/
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		if (s[i] == alpha[j])
		{
			s[i] = cipher[j];
			break;
		}
	}
	return (s);
}
