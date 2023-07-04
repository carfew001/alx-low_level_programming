#include <stdio.h>
#include "main.h"

/*
 * _strchr - Entry Point
 * @s: input
 * @c: input
 * @Return: ALWAYS 0 (SUCCESS)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);

}
