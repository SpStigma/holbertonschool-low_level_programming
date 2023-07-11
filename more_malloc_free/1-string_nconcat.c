#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat n byte of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of s2
 * Return: concat s1 et s2 with n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl1 = 0, sl2 = 0, i = 0, j = 0;
	char *conca = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sl1] != '\0')
		sl1++;
	while (s2[sl2] != '\0')
		sl2++;

	conca = malloc(sizeof(char) * (sl1 + n + 1));

	if (conca == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		conca[i] = s1[i];
		i++;
	}

	for (j = 0; j < n; j++)
	{
		conca[i] = s2[j];
		i++;
	}
	conca[i] = '\0';
	return (conca);
}
