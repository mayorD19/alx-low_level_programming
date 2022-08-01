#include <stdio.h>
#define THE_FILE_NAME __FILE__

/**
 * main - RETURN THE NASME OF THE FILE BEING COMPILED
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", THE_FILE_NAME);
	return (0);
}
