#include <main.h>

/**
 * main - script entry point
 *
 * Description: Function for printing time in mins
 */
void jack_bauer(void);

int main(void)
{
	jack_bauer();

	return (0);
}

void jack_bauer(void)
{
       	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + "0");
			_putchar((hr % 10) + "0");
			_putchar(":");
			_putchar((min / 10) + "0");
			_putchar((min % 10) + "0");
			_putchar("\n");
		}	
	}
 		 
}
