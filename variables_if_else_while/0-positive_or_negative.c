#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - n random each time executed to know if this is a positive, neg
 * ative or zero
 * Return: to sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("if the number is greater than 0: is positive\n");
	}
	else if (n == 0)
	{
		printf("if the number is 0: is zero\n");
	}
	else if (n < 0)
	{
		printf("if the number is less than 0: is negative\n");
	}


	return (0);
}
