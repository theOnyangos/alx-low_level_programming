#include <main.h>

/**
 * main - script entry point
 *
 * Description: Function for printing number sign
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

int main(void)
{
	int r;

	r = print_sign(20);
	_putchar(",");
	_putchar(" ");
	_putchar(r + "0");
	_putchar("\n");

	r = print_sign(0);
	_putchar(",");
	_putchar(" ");
	_putchar(r + "0");
	_putchar("\n");

	r = print_sign(0xff);
	_putchar(',');
       	_putchar(' ');
       	_putchar(r + '0');
       	_putchar('\n');

	r = print_sign(-1)
	_putchar(',');
    	_putchar(' ');
    	_putchar(r + '0');
    	_putchar('\n');

	return (0);
}
