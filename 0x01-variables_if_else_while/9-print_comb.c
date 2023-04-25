#include <stdio.h>
/**
 * main - Prints possible combinations os single digits numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 46; n < 58; n++)
		putchar(n);
	if (n != 57)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
