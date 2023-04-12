/**
 * _strchr - locates a character in a string array
 *
 * @s: pointer to string array
 * @c: character
 *
 * Return: character located
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
