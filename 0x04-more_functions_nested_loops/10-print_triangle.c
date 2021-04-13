#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 */
void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= (size - row); column++)
			_putchar(' ');
		for (k = 1; k <= row; k++)
			_putchar('#');
		_putchar('\n');
	}
}
