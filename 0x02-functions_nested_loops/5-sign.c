#include "main.h"

/**
 * print_sign - prints the sign of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar("+");
		return (result);
	} else if (n == 0)
	{
		result = 0;
		_putchar("0");
		return (result);
	} else if (n < 0)
	{
		result = -1;
		_putchar("-1");
		return (result);
	}
}
