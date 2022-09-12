#include <main.h>
#include <stdio.h>

/**
 * main - script entry point
 *
 * Description: Function for computing absolute value for an intager
 */
int _abs(int)
{
	int result = abs(int);
	return (result);
}

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d", r);

	r = _abs(0);
	printf("%d", r);

	r = _abs(1);
	print("%d", r);

	r = _abs(-98);
	printf("%d", r);

	return (0);	
}
