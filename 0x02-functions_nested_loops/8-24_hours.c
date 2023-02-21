#include "main.h"
/**
 * jack_bauer - prints every minute
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int hour = 0;

	int minute = 0;

	while (hour < 24)
	{
		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
		minute++;
		if (minute == 60)
		{
			minute = 0;
			hour++;
		}
	}
}
