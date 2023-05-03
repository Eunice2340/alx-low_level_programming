#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length we seek.
 * Return: length
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
