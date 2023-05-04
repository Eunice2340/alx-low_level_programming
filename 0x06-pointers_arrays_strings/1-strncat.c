#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes from source.
 * @dest: The string to be acted upon
 * @src: The string to be appended to dest.
 * @n: The number of bytes from source.
 * Return: A pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
