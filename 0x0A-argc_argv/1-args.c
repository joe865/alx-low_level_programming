#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count the aruguements
 * @argv: Arguements
 *
 * Return: Always 0
 */

mint main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
