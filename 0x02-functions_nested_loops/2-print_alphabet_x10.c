# include "main.h"
/**
 * main - prints the alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int l, n;

	n = 0;

	while (n < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		n++
	}
}
