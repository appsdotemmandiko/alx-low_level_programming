#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 *           using malloc
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         (Success) or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	pntr = malloc(nmemb * size);

	if (!pntr)
		return (NULL);
	while (i < (nmemb * size))
	{
		pntr[i] = 0;
		i++;
	}
	return (pntr);
}
