#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the number is positive, negative or zeo
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if else(n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n")
	return (0);
}
