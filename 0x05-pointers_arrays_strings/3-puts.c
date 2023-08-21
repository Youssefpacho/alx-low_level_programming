#include "main.h"

/**
 *_puts- prints a string followed by a new line
 *@str: A pointers to a char to be printed followed by new line
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
