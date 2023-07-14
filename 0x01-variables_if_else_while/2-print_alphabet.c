#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
