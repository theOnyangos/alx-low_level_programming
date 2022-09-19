#include "main.h"

/**
 * swap_int - function for swapping digints
 *
 * @a: int pointer
 *
 * @b: int pointer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
