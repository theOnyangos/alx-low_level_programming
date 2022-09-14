#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return (0)
 */

int main(void)
{
	int i = 0;
	int multi_3 = 3;
	int multi_5 = 5;
	int max_limit = 1024;
	int sum = 0;

	while (i == 0)
	{
		if (multi_3 < max_limit)
		{
			sum = sum + multi_3;
			multi_3 = multi_3 + 3;
		}

		if (multi_5 < max_limit && (multi_5 % 3) != 0)
		{
			sum += multi_5;
			multi_5 += 5;
		} else if (multi_5 % 3 == 0)
		{
			multi_5 += 5;
		}

		if (multi_3 >= max_limit && multi_5 >= max_limit)
		{
			i = 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
