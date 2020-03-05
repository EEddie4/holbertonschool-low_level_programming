#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - function
* @grid: dbl pointer
* @height: height
*
* Description: frees a 2d grid.
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);

	free(grid);
}
