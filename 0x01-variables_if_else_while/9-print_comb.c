#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	for (; i < 10; )
	{
		putchar(i + '0');
		i++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
