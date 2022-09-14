#include <stdio.h>

/**
 * main - entry point for fibonacci
 *
 * Return: Always return (0)
 */

int main(void)
{
	unsigned long int a;
	unsigned long int before = 1;
	unsigned long int after = 2;

	printf("%lu", before);

	for (a = 1; a < 50; a++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	printf("\n");
	return (0);
}
