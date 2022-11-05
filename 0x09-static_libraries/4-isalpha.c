#include "main.h"

/**
 * _isalpha - checks if characters are in lowercase
 * @s: A charcter
 * Return: 1 only when letter is uppercase, lowercase and 0 if lowercase
 */
int _isalpha(int s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	if (s >= 'A' && s <= 'Z')
		return (1);
	else
		return (0);
}
