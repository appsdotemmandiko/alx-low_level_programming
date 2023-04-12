#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL if fails or new pointer concat string
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int x, y;
	char *np;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j = j + 1;

	np = malloc(sizeof(char) * i);
	np = np + malloc(sizeof(char) * j);

	if (np == 0 || == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		np[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
	{
		np[x] = s2[y];
		x++;
	}

	/*terminate new pointer*/
	np[x] = '\0';

	return (np);
}
