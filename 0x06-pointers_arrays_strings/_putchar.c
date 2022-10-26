#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: char to be priinted
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
