#include "holberton.h"

/**
 * main - Print the word print alphabet in lower case
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return;
}
