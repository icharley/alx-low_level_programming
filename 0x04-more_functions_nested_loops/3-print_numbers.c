#include "holberton.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}