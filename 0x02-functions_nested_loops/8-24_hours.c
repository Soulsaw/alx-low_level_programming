#include "main.h"
/**
 * jack_bauer - prrint every minutes of the day
 *
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				_putchar('0');
				_putchar('0' + a);
			}
			else
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}
			_putchar(':');
			if (b < 10)
			{
				_putchar('0');
				_putchar('0' + b);
			}
			else
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}

			_putchar('\n');
		}

	}
}
