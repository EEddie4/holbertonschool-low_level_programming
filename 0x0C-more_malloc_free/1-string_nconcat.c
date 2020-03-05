#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
* string_nconcat - function
* @s1: string one to combine to
* @s2: string two to combine to
* @n: n bytes of s2 to concat
*
* Description: concat str1 into new memory along with n bytes of str2
* Return: both s1 and s2, or null if fail.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	unsigned int l;
	char *combo;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	combo = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (combo == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (j = 0; s1[j]; j++)
	{
		combo[i] = s1[j];
		i++;
	}
	for (k = 0; k < n; k++)
	{
		for (l = 0; s2[l]; l++)
		{
			if (n >= l)
				combo[i] = s2[l];
			else
				combo[i] = s2[k];
		}
		i++;
	}
	combo[i] = '\0';
	return (combo);
}
/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
