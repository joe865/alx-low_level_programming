#include <stdio.h>
/**
 * main - Main function
 * Return: Returns 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
