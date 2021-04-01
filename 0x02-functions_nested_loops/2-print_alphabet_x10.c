#include "holberton.h"

/**
 * print_alphabet_x10 - print 10times the alphabet in lowercase
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int lines;
	char alpha;

	for (lines = 0; lines < 10; lines++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}
