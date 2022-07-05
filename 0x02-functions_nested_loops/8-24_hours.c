#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - printing the time of jack bauer's life
 * 
 * @c: printing out time
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hrs_left;
	int min_left;

	while (hrs <= 23)
	{
		while (min <= 59)
		{
			min_left = min % 10;
			hrs_left = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_left + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_left + '0');
			min++;
			_putchar('\n');
		}
		hrs++;
		min = 0;
	}
}
