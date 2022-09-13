#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char s[] = "_putchar";

	for (i = 0; i < 7; i++)
	{
		c = s[i];
		_putchar(c);
		i++;
	}

	_putchar("\n");

	return (0);
}
