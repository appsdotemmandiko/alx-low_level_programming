#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: array pointer address
 *         NULL if it fails
*/

int *array_range(int min, int max)
{
	int *pntr, i = 0;

	if (min > max)
		return (NULL);

	pntr = malloc(sizeof(int) * ((max - min) + 1));

	if (!pntr)
		return (NULL);
	for ( ; min <= max; i++)
	{
		pntr[i] = min;
		min++;
	}

	return (pntr);
}
