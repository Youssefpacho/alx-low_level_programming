#include "main.h"

/**
 *_abs - prints the absolute value of an integer
 *@n: number to be checked
 *Return: the absolute value of input
 */

int _abs(int n)
{
	if (n >=  0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
