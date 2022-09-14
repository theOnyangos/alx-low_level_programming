#include <stdio.h>

/**
 * main - entry point function
 *
 * description: fibonacci
 *
 * Return: return (0) (success)
 */

int main(void)
{
	unsigned long int limit_num = 4000000;
	unsigned long int total_sum = 0;
	unsigned long int after = 1;
	unsigned long int before = 0;
	unsigned long int B = 0;

	while (limit_num > B)
	{
		B = before + after;

		if ((B % 2) == 0)
		{
			total_sum += B;
		}

		before = after;
		after = B;
	}
	printf("%li\n", total_sum);
	return (0);
}
