#include "main.h"
#include <stdio.h>

/**
 * _isupper - function
 *
 * Return: 1 if (c) is ippercase otherwise 0
 *
 * @c: letter being checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
