#include"main.h"

/**
 * _puts - prints a string and newline to stdout
 *
 * @str: input parameter of type char
 *
 * Return: None
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
