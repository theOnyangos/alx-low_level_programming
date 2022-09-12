#include <main.h>

/**
 * main - entry point for compiler
 *
 * description: function for printing alphabets to lowercase
 */
void print_alphabet(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	_putchar (alphabet);
	_putchar ("\n");
}

int main(void)
{
	print_alphabet();
	return (0);
}

