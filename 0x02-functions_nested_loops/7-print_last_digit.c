#include <main.h>

/**
 * main - entry point function
 *
 * Description: function for getting the last digit of a number
 */
int print_last_digit(int)
{
	int last = int % 10;
	return (last);
}

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-1024);
	_putchar("0" + r);
	_putchar("\n");

	return (0);
}
