#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:char input param
 *
 * Return: On success returns 1.
 * On error, returns -1 with errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
