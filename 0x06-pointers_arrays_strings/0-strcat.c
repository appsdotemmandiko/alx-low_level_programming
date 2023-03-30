/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	/*array size of dest*/
	while (dest[x])
		x++;

	/* iterate through each src array value without the null byte*/
	for (y = 0; src[y] ; y++)
		/*append arrays while overwritting the null byte*/
		dest[x++] = src[y];

	return (dest);
}
