#include "main.h"

/**
 * move_past_star - iterates past asterisk
 * @s2: second string
 *
 * Return: pointer past star
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - checks if identical or not
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 if false
 */
int inception(char *s1, char *s2)
{
	int re = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		re += wildcmp(s1 + 1, s2 + 1);
	re += inception(s1 + 1, s2);
	return (re);
}

/**
 * wildcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 1 if identical or 0 if error
 */

int wildcmp(char *s1, char *s2)
{
	int re = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			re += wildcmp(s1 + 1, s2 + 1);
		re += inception(s1, s2);
		return (!!re);
	}
	return (0);
}
