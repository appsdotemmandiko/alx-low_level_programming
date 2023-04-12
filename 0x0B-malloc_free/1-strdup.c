#include <stdlib.h>

/**
 * *_strdup - duplicates a string to new pointer
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         or newpointer @np
*/

char *_strdup(char *str)
{
	int i = 0, x = 0;
	char *np;

	if (str == NULL)
		return (NULL);

	/*size of str*/
	while (str[i] != '\0')
		i++;
	i = i + 1;

	np = malloc((sizeof(char) * i);
	if (np == 0 || np == NULL)
		return (NULL);

	while (str[x] != '\0')
	{
		np[x] = str[x];
		x++;
	}

	return (np);
}
