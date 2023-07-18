#include "main.h"

/**
 * print_alphabet - to print alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}
	_putchar('\n');
}
