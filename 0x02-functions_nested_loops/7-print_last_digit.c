#include "holberton.h"

/**
 * print_last_digit - function prints the last digit of a number
 *@x: input numberas integer
 * Returns: the value of the last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (x < 0)
	{
		_putchar(-y + '0');
		return (-y);
	}
	else
	{
		_putchar(y + '0');
		return (y);
	}

}
