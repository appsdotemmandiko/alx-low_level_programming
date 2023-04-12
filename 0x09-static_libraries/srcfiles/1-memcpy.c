/**
 * _memcpy - copies memory src to dest
 *
 * @dest: input param destination
 * @src: input param source
 * @n: positive no for source bytes
 *
 * Return: Always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
