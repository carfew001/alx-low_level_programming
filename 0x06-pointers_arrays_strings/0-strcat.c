#include "main.h"

/**
 * _strcat -  function that concatenates two strings
 * @dest: Input value
 * @strc: Input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;

	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[k] - src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (0);
}
