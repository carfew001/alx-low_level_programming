#include "main.h"

/**
 * _put - Puts a string
 * @str: The string to put
 * Return : void
 */

void _puts(char *str)

{
	for (; *str != '\0' ; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');

}
