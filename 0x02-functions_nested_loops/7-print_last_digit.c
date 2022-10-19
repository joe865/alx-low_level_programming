#include "main.h"

/**
 * print_last_last dugit: points at last didgit
 * @s: the number
 * Return: vakue of the last digit
 */
int print_last_digit(int s)
{
	int ld = n % 10;
	
	if (ld < 0)
		ld *= -1;
	
	_putchar (ld +'0');

	return (0);
}
