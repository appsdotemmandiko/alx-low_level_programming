/**
 * _strlen - returns the length of a string
 *
 * @s: input parameter of type string
 *
 * Return: int value of string length
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
