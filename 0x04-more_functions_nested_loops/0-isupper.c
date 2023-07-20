#include "main.h"

/**
* _isupper - checks for lowercase character
* @c : is the character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
