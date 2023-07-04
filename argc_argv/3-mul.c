#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: nombre d'argument
 * @argv: affichage des arguments
 *
 * Return: to sucess
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);		
	int result = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
