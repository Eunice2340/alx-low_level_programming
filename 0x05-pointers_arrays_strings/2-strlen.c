#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length we seek.
 * Return: The length of @s.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
		longi++;
	s++;
	return (longi);
}
