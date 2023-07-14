#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char j;

	i = '0';
	j = 'a';	
	for (; i <= '9'; i++)
	{
		putchar(i);
	}
	for (; j <= 'f'; j++)
	{
		putchar(j);
	}
	printf("\n");
	return (0);
}
