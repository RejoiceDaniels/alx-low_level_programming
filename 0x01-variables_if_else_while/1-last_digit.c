#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 * main - entry point
 * description: prints the value of the last digit of n
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m;
	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (m > 5)
		printf("and is greater than 5\n");
	if (m == 0)
		printf("and is 0\n");
	if (m < 6 && m != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
