#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* array_range - function
* @min: minimum value of array
* @max: max value of array
*
* Description: function to create an array of integers
* Return: ptr to array or null if fail
*/
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	range = malloc(sizeof(int) * i);

	return (range);
}
