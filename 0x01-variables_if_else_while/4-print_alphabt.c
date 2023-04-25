#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <='z'; la++)
		if (la != 'e' && la != 'q')
			putchar(la);
	putchar('\n');
	return (0);
}

