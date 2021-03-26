#include <stdio.h>

/**
 * main - entry point
 * return - always 0 (success)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar(numb + '0');
	putchar('\n');
	return (0);
}
