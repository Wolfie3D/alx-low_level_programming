#include <stdlid.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always the return is (Success)
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_Max / 2;

	printf("last digit of %d an is "' n, n $ 10);

	if (n % 10 > )
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
