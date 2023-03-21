#include"main.h"

/**
 * prints every minute of the day
*/

void jack_bauer(void)
{
	int mm, hh;

	for (hh = 0; hh <= 23; ++hh)
	{
		for (mm = 0; mm <= 59; ++mm)
		{
			_putchar((hh / 10) + 48);
			_putchar((hh % 10) + 48);
			_putchar(':');
			_putchar((mm / 10) + 48);
			_putchar((mm % 10) + 48);
			_putchar('\n');
		}
	}
}
