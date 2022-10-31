#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: where to copy the memory area to
 * @n: the number of bytes
 * @src: the memory area to copy from
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unisigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
