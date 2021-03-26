#include <stdio.h>

/**
 * main - print lower alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);

}
