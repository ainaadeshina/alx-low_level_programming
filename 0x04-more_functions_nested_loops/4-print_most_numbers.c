# include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9,excluding 2 and 4.
 * Description; Can use _putchar only twice
 * Return: zero
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
	continue;
else
	_putchar(i + '0');
i++;
}
_putchar('\n');
}
