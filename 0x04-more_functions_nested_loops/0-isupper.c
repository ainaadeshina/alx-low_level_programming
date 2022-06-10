#include "main.h"

/**
 * _isupper - A function that checks for uppercase charecter.
 * @c: An input charater
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
