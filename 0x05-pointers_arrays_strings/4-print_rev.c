#include "main.h"

/**
 *print_rev- prints a string in reverse followed by a new line
 *@s: A pointers to a char to be printed in reverse followed by new line
 */
void print_rev(char *s)
{
	int i, length = 0;
	char tmp;

	while (s[length])
		length++;
	
	length = length - 1;

	for (i = 0; i <= length; i++, length--)
	{
		tmp = s[length];
		s[length] = s[i];
		s[i] = tmp;
		_putchar(tmp);
	}
	_putchar('\n');
}
