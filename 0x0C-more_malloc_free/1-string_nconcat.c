#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: no of bytes to add to @s1 to
 *	accomodate @s2
 *
 * Return: concatenated string plus new pointer
 *         (Success) or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int l1, l2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; *(s1 + l1); )
		l1++;
	for (l2 = 0; *(s2 + l2); )
		l2++;

	if (n > l2)
		n = l2;

	pntr = (char *) malloc(sizeof(char) * (n + l1 + 1));
	if (!pntr)
		return (NULL);

	/*concat strings*/
	for (i = 0; s1[i] != '\0'; i++)
		pntr[i] = s1[i];
	for (; i < (l1 + n); i++)
		pntr[i] = s2[i - l1];
	pntr[i] = '\0';
	return (pntr);
}
