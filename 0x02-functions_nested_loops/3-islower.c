#include <main.h>

/**
 * main - entry point
 *
 * Description: Function that checks for lowercase charactors
 */
int _islower(int c)
{
	int result;

	if(islower(c))
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

	r = _islower("H");
	_putchar(r + "0");

	r = _islower("o");
	_putchar(r + "0");

	r = _islower(102);
	_putchar(r + "0");

	return (0);
}
