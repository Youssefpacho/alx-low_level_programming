#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b;
for (b = 0; b <= 23; b++)
{
	for (a = 0; a <= 59; a++)
	{
		_putchar(b / 10 + '0');
		_putchar(b % 10 + '0');
		_putchar(':');
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
		_putchar('\n');
	}
}
}
