#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c : is the character to be checked
 * return: 1 if c lowercase or else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}