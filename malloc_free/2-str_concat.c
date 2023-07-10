#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Conca
 */

char *str_concat(char *s1, char *s2)
{
	int sl1 = 0;
	int sl2 = 0;
	char *conca;
	int i = 0;
	int j = 0;

	while (s1[sl1] != '\0')
	{
		sl1++;
	}
	while (s2[sl2] != '\0')
	{
		sl2++;
	}

	conca = malloc(sizeof(char) * (sl1 + sl2 + 1));

	if (conca == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		conca[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conca[i] = s2[j];
		i++;
		j++;
	}
	conca[i] = '\0';
	return (conca);

}
