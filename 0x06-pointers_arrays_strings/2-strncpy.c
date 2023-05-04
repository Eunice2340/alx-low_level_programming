#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the string copy.
 * @src: the source string.
 * @n: The maximum number of bytes to copy from src.
 * Return: A pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
