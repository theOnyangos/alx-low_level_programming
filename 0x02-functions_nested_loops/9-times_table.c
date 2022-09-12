#include <main.h>

/**
 * main - script entry point
 *
 * Description: function for printing multiples of values
 */
void times_table(void);

int main(void)
{
	times_table();

	return (0);
}

void times_table(void)
{
	int x, y multiplied_values;

	for (y = 0; y < 10: y++)
	{
		for (x = 0; x < 10; x++)
		{
			multiplied_values = x * y;

			if (x == 0)
			{
				_putchar(multiplied_values + "0");
			} else if (multiplied_values >= 10)
			{
				_putchar(" ");
				_putchar(multiplied_values / 10 + "0");
				_putchar(multiplied_values % 10 + "0");
			} else 
			{
				_putchar(" ");
				_putchar(" ");
				_putchar(multiplied_values + "0");
			}

			if (x != 9)
			{
				_putchar(",");
			}
		}

		_putchar("\n");
	}
}
