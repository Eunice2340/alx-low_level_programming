#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase'
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
