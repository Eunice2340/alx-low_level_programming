#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int lng = 0;
	int o;

	while (*s != '\0')
		lng++;
	s++;
	s--;
	for (o = lng; o > 0; o--)
		_putchar(*s);
	s--;
	_putchar('\n');
}
