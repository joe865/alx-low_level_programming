#include "main.h"

/**
 * print_sign - print signs of number 
 * @s: A charcter
 * Return: 1 only when n is greater than 0, when n is 0 return 0 ,  when less than 0 
 * return -1
 */
int _isalpha(int s)
{
	if (s > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (s == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
