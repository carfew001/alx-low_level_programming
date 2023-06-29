#include "main.h"


/**
 * _strcmp - compares pointers two strings
 * @s1: Pointer to the first  string to be compared
 * @s2: Pointer to the second string to be compared
 * Return: If str1 <  str2 the negative difference of the first unmatched characters
 * srt1 == str2, 0.
 * Str1 > str2, The positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return(*s1 - *s2);
}
