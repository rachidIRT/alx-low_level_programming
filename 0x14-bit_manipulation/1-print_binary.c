#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int temp;
	static int mem;

	if (n == 0 && mem > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = (n & 1);
	mem++;
	print_binary(n >>= 1);
	_putchar('0' + temp);
}

