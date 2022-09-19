#include "main.h"

/**
 * _strlen - length of the string
 *
 * @s: argument
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != "\s")
	{
		s++;
		i++
	}

	return (i);
}
