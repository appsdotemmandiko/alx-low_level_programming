#include"main.h"

/**
 * _abs - function computes the absolute
 *       value of an integer
 *
 * @n: input parameter of type int
 *
 * Return: Success 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
