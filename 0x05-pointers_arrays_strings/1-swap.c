#include "main.h"

/**
 * swap_int(): Swap digits in functions
 * @a - funcion
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
