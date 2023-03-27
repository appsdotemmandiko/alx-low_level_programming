#include"main.h"

/**
 * print_rev - prints strings in reverse
 *
 * @s: input parameter of type char
 *
 * Return: None
*/

void print_rev(char *s)
{
	int x;

	/*length of string without nulls*/
	for (x = 0; s[x] != '\0'; ++x)
		;

	/*print char decrementing*/
	for (--x; x >= 0; --x)
		_putchar(s[x]);
	_putchar('\n');
}
