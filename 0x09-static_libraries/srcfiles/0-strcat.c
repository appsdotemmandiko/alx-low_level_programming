/**
 * _strcat - concats two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: results of dest pointer
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (int src_index = 0; src[src_index]; src_index++)
		dest[dest_len++] = src[src_index];

	dest[dest_len] = '\0';

	return (dest);
}
