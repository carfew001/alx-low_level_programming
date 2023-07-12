#include "main.h"
#include <stdlib.h>

/*
 * create_array - creates an array of chars
 * @size: The array to be created.
 * @c: The char to fill the array
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
}

