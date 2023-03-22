#include "main.h"
/**
 * jack_bauer - prrint every minutes of the day
 *
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				putchar('0');
				putchar('0' + a);
			}
			else
			{
				putchar('0' + a);
			}
			putchar(':');
			if (b < 10)
			{
				putchar('0');
				putchar('0' + b);
			}
			else
			{
				putchar('0' + b);
			}

			putchar('\n');
		}

	}
}
