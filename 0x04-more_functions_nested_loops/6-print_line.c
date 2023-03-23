#include"main.h"

/**
 * print_line - prints char in a straight line
 *
 * @n: is the number of times the _ character
 *     is printed
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
