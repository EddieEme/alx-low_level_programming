#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: address of the two diamension
 * @height: geight of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
