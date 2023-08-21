#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@a, @b: A pointers to an int whose value will be swapped.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = *a;
	*a = temp;

}
