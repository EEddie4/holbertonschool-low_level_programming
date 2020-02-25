#include "holberton.h"
#define NULL 0
/**
* set_string - function
* @s: double pointer to to
* @to: pointer to string
*
* Description: function to set the value of a pointer to a char
* Return: 0
*/
void set_string(char **s, char *to)
{
	*s = to;
}
