#include "main.h"
#include <stdio.h>

/**
 * main - affiche tout les arguments avec saut de ligne
 * @argc: nbr d'arguments
 * @argv: afficahge des arguments
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
