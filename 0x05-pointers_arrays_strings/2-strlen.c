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

	while (*s != "\0")
	{
		s++;
		i++;
	}

	return (i);
}
