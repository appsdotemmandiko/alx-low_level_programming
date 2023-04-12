/**
 * _strncat - concats two strings.
 *
 * @dest: input param for destination pointer
 * @src: input param for source pointer
 * @n: highest bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, const char *src, int n)
{
	int c = 0, i;

	while (dest[c] != '\0')
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
