#include "main.h"
#include <stdio.h>


/**
 * main - ecrie si n multiple de 5 et 3
 */

int main(void)
{
	int n = 0;

	for (; n <= 100 ; n++)
	{
		printf(" ");
	}

		if (n % 3 == 0)
			printf("Fizz");
	}
	if (n % 5 == 0)
	{
		printf("Buzz");
	}
	if (n % 3 == 0 && n % 5 ==0)
	{
		printf("FizzBuzz");
	}
}
