#include "holberton.h"
/**
* binary_to_uint - function
* @b: string of binary chars
*
* Description: Function to convert a binary number into a unsigned int.
* Return: The converted number or 0 is b is null or if numbers
* in string are not 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
		return (0);

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num = num << 1;
		else
			return (0);
	}
	return (num);
}
