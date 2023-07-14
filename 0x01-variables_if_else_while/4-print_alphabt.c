#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;

	l = 'a';
	for (; l <= 'z'; l++)
	{
	if (l == 'q' || l == 'e')
	{
		continue;
	}
	putchar(l);
	}
	putchar('\n');
	return (0);
}
