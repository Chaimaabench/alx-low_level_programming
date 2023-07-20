#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
		char i;

		i = '0';

		for (; i <= '9'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
}
