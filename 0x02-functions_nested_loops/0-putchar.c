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
	char c;

	while (i <= 7)
	{
		c = s[i];
		_putchar(c);
		i++;
	}

	_putchar('\n');

	return (0);
}
