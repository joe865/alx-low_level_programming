#include "main.h"

/**
 * swap_int- Swap digits in functions
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
