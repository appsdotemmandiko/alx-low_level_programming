#include"main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: input param to check
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
