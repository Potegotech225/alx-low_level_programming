#include "main.h"

/**
 * print_binary - prints a binary equivalent of a decimal number
 * @n:the number to print in a binary
 */
void print_binary(unsigned long int n)
{
	int l, count = 0;
	unsigned long int current;

	for (l = 63; l >= 0; l--)
	{
		current = n >> l;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
