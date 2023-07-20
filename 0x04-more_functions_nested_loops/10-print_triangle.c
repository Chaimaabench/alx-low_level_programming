#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line..
 * @size: the number of times the character \ should be printed
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int i;
	int space;
	int hashes;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i <= size; i++)
	{
		for (space = size - i; space >= 1; space--)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= i; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
