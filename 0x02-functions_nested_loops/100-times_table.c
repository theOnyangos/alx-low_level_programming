#include "main.h"

/**
 * print_times_table - function
 *
 * @n: number of times
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((j * i) + '0');
				} else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((((j * i) / 10) % 10) + '0');
					_putchar(((j * i) % 10) + '0');
				} else if ((i * j) < 1000)
				{
					_putchar(' ');
					_putchar((((j * i) / 100) % 10) + '0');
					_putchar((((j * i) / 10) % 10) + '0');
					_putchar(((j * i) % 10) + '0');
				}

				if (j != (n))
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
