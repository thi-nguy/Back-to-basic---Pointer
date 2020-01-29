/* Write a program in C to find the factorial of a given number using pointers. */

#include <stdio.h>

int	main(void)
{
	int n;
	int *f;
	int i;
	printf("Test data:\n");
	printf("Input a number: \n");
	scanf("%d", &n);
	i = 1;
	*f = 1;
	while (i <= n)
	{
		*f= *f * i;
		i++;
	}
	printf("The factorial of %i is: %i\n", n, *f); 
	return(0);
}

