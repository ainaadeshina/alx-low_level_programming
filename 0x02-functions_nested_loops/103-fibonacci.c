#include <stdio.h>
/**
 * main - main block
 * Description: print the sum of even fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, t = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			t += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", t);
	return (0);
}
