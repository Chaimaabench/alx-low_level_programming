#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	az = 'z';
	while (az >= 'a')
	{
		putchar(az);
		az--;
	}
	putchar('\n');
	return (0);
}
