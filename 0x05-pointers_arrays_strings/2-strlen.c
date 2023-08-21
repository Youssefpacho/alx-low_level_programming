#include "main.h"

/**
 *_strlen- returns the lenght of a string.
 *@s: A pointers to a char whose lenght will be calculated
 *Return : length of the char
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
