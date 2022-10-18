#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 */

void print_alphabet(void)
{
	char ch;
	int i, j;

	for (i = 0; i <= 10; i++)
	{
	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	}
	_putchar('\n');
}
