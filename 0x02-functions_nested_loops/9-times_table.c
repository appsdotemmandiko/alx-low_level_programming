#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Separates by commas
 *
*/

void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{

			prod = num * mul;
			if (prod <= 9)
				_putchar(' '); /*space for single digit*/
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*append second digit*/
		}
		_putchar('\n');
	}
}
