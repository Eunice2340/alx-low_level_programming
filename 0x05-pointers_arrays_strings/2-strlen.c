#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length we seek.
 * Return: The length of @str.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
		l++;
	s++;
	return (l);
}
