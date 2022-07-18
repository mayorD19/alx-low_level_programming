#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @begin: paramter for haystack
 * @end: paramter for needle
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *begin, char *end)
{

	while (*begin != '\0')
	{
		char *beginning = begin;
		char *pattern = end;

		while (*pattern == *begin && *pattern != '\0'
		       && *begin != '\0')
		{
			begin++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		begin = beginning + 1;
	}
	return ('\0');
}
