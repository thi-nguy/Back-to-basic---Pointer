/* Write a program in C to show how a function returning pointer. */

#include <stdio.h>

int 	*larger(int *x, int *y)
{
	if (*x > *y)
		return (x);
	else
		return (y);
}

int	main(void)
{
	int a;
	int b;
	int *r;

	printf("Input the first number: \n");
	scanf("%d", &a);
	printf("Input the second  number: \n");
	scanf("%d", &b);
	printf("Exptected Output: \n");
	r = larger(&a, &b);
	printf("The number %i is larger.\n", *r);
	return (0);
}
