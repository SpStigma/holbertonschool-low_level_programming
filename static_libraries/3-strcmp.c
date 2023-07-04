#include "main.h"

/**
 * _strcmp - fonction to compare
 * @s1: element 1 a comparer
 * @s2: element 2 a comparer
 *
 * Return: différence des 2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
