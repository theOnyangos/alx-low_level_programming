#include "operations.h"

/**
 * _add - function the takes in two intager numbers and ads them together
 * @num1: the first parameter passed to the function
 * @num2: the second parameter
 * Return: This function returns a sum of num1 and num2
 */

int _add(int num1, int num2)
{
	if (num1 != 0 && num2 != 0)
	{
		return (num1 + num2);
	}

	return (0);
}
