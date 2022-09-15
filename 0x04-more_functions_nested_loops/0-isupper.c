#include "main.h"

/**
 * _isupper - function
 *
 * Return: 1 if (c) is ippercase otherwise 0
 *
 * @c: letter being checked
 */

int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
	{
		return (1);
	}

	return (0);
}
