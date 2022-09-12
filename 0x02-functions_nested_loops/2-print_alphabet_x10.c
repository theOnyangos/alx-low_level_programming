#include <alx.h>

/**
 * main - entry function
 *
 * Description: Function for printing alphabets 10 times
 */

void print_alphabet_10x(void)

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = alf; i <= 10; i++)
	{
		_putchar (i);
		_putchar ("\n");
		i++;
	}
}
