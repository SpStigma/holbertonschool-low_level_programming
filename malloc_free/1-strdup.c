#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to newly allocated space in memory
 * @str: sting to be dupplicated
 *
 * Return: duplicate
 */

char *_strdup(char *str)
{
	char *duplicate = NULL;
	int i;
	int j;

	if (str == 0)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i ; j++)
	{
		duplicate[j] = str[j];
	}
	duplicate[j] = '\0';
	return (duplicate);
}
