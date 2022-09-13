#include <main.h>

/**
 * print_alphabet - entry point for compiler
 *
 * Description: print alphabet with _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar("\n");
}
