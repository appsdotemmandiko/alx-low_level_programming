/**
 * rev_string - reverses a string
 *
 * @s: char input parameter
 *
 * Return: None
*/

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*length without nulls*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*loops halfway*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*to represent array[0]*/
		s[l - 1 - i] = ch;
	}
}
