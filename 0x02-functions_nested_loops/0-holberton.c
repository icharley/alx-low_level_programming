#include "holberton.h"

int main (void)
{
	char str[] = "Holberton\n";
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
