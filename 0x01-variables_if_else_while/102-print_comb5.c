#include <stdio.h>

/**
 * main -A function that prints two two digits
 *
 * Description using eight putchars prints two two digits numbers
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;
	int f_d2;
	int l_d2;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');
		f_d2 = (c / 10 + '0');
		l_d2 = (c % 10 + '0');

		if ((f_d < l_d) && (f_d2 < l_d2))
		{
			putchar(f_d);
			putchar(l_d);
			putchar(' ');
			putchar(f_d2);
			putchar(l_d2);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
