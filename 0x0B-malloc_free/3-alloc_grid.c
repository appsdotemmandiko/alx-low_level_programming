#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] != NULL)
		{
			for (y = 0; y < width; y++)
				grid[x][y] = 0;
		}
		else
		{
			while (y >= 0)
			{
				free(grid[x]);
				x--;
			}
		}
		free(grid);
		return (NULL);
	}

	return (grid);
}
