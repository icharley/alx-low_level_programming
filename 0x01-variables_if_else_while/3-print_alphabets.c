#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) /* print lowercase letters */
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++) /* print uppercase letters */
       	{
       	putchar(ch);
	putchar('\n');
	}
	return (0);
}
