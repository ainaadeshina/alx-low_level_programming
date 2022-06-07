#include "main.h"

/**
 * main - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	int n, l;

	n = 0;

	while (n < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		n++;
		_putchar('\n');
	}
}
