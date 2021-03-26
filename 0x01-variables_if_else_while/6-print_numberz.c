#include <stdio.h>

/**
 * main - print all single digit using puchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar(numb + '0');
	putchar('\n');
	return (0);
}
