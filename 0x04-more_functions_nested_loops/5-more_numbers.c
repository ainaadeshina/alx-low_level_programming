# include "main.h"
/**
 * more_numbers - print10 times the numbers from 0 to 14.
 * Description: can only use _putchar 3 times
 */
void more_numbers(void)
{
	int c, i;

	c=0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 0)
				_putchar(i / 10 + '0');
			-Putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
