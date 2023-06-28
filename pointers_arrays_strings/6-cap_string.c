#include "main.h"

/**
 * *cap_string - upper every chaacter
 * @str: phrase a afficher
 *
 * Return: return tout les mots avec une maj au début
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if
				((i == 0) ||
				 (str[i - 1] == ',') ||
				 (str[i - 1] == ';') ||
				 (str[i - 1] == '.') ||
				 (str[i - 1] == '!') ||
				 (str[i - 1] == '?') ||
				 (str[i - 1] == '(') ||
				 (str[i - 1] == ')') ||
				 (str[i - 1] == '{') ||
				 (str[i - 1] == '}') ||
				 (str[i - 1] == '\n') ||
				 (str[i - 1] == '\t') ||
				 (str[i] == 0))
				 {
				 str[i] = str[i] - 32;
				 }
		}
		i++;
	}
	return (str);
}
