/**
 * _memset - fills memory with byte
 *
 * @s: input param ref pointer to memory
 * @b: input param ref value for s pointer
 * @n: bytes to be fill memory
 *
 * Return: A pointer to filled memory area
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
