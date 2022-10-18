#include "main.h"

/**
 * _islower - checks if characters are in lowercase 
 * Return: 1 only when letter is lowercase, and 0 if lowercase
 */
int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	else
		return (0);
}
