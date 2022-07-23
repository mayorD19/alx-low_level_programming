#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the recieved arguments
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}

	return (0);
}
