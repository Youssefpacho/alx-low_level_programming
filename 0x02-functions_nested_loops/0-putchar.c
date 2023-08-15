#include "main.h"
/**
 * main - entry point
 * Description: Prints _putchar followed by a new line
 * Return: 0 (success)
 **/
int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
