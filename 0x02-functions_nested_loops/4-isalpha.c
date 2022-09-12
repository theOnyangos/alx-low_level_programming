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

	r = _isalpha("h");
	_putchar(r + "0");

	return (0);
}
