#include <main.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n);

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	ptint_to_98(111);
	print_to_98(81);
	print_to_98(-10);

	return (0);
}

void print_to_98(void)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i++)
		{
			if (i != n)
			{
				printf(", ");
			}

			printf("%d", i);
		}
	}
	else 
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(", ");
			}

			printf("%d", i);
		}
	}

	printf("\n");
}
