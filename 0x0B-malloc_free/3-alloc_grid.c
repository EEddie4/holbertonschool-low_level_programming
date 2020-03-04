#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - function
* @width: width of grid
* @height: height of grid
*
* Description: return a pointer to a 2 dimensional array of integers
* Return: null if negative, return pointer success
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int *grid;

	grid = malloc(height * width * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(grid + i * width + j) = i + j;
	}
	return (0);
}
