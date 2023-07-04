#include "main.h"
#include <stdio.h>

/**
 * main - affiche le nombre d'arguments
 * @argc: nbr d'arguments
 * @argv: affichage des arguments
 *
 * Return: to sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
