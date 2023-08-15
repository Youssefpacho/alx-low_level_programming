#ifndef MAIN_H
#define MAIN_H

/**
  * print_alphabet - Prints the alphabet
  *
  * Return: characters
  */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
}

#endif
