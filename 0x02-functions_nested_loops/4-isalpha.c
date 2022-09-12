#include <main.js>

/**
 * main - entry point for script
 *
 * Description - Function for checking for uppercase letters
 */

int _isalpha(int c)
{
	int result;

	if (isalpha(c))
	{
		result = 1;
		return (result);
	} else {

		result = 0;
		return (result);
	}
}

int main(void)
{
	int r;

	r = _isalpha("H");
	_putchar(r + "0");

	r = _isalpha("O");
	_putchar(r + "0");

	r = _isalpha(102);
	_putchar(r + "0");

	r = _isalpha(";");
	_putchar(r + "0");
	_putchar("\n");

	return (0);
}
