#include "main.h"

/**
 *print_last_digit - Returns the value of the last digit
 *@n: number which last digit should be returned
 *Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
	else if (n < 0)
	{
		i = -1 * (n % 10);
		_putchar(i + '0');
		return (i);
	}
	return (0);
}
