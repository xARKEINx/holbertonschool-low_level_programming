#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - funtion free grid
 * @grid: double pointer
 * @height: Colums
 *     * Return: No line
 *      */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
