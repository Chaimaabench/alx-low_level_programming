#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet in lower case ten times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char az;
	int i;

	i = 0;
	for (; i <= 10; i++)
	{
		az = 'a';
		while (az <= 'z')
		{
		_putchar(az);
		az++;
		}
		_putchar('\n');
	}
}
