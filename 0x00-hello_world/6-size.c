#include <stdio.h>

/**
 * main - print the sizes of different data type
 *
 * Description: using the main function 
 * this program prints "sizes of data types
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int k;
	float f;

	printf("The size of an char: %ld byte(s)\n", sizeof(c));
	printf("The size of a int: %ld byte(s)\n", sizeof(i));
	printf("The size of a long int: %ld byte(s)\n", sizeof(l));
	printf("The size of a long long int: %ld byte(s)\n", sizeof(k));
	printf("The size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
