#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	if (n > 0)
	printf("98 is positive\n");
	else if (n == 0)
	printf("0 is zero\n");
	else if (n < 0)
	printf("-98 is negative\n");
	return (0);
}
