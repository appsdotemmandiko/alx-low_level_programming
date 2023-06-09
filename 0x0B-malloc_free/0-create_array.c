#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int point = 0;

	if (size == 0)
		return (NULL);
	buff = malloc(sizeof(char) * c);

	if (buff == NULL)
		return (NULL);

	while (point < size)
	{
		buff[point] = c;
		point++;
	}

	return (buff);
}
