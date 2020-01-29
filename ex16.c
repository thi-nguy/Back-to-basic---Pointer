/* Write a program in C to compute the sum of all elements in an array using pointers. */

#include <stdio.h>
#include <stdlib.h>

int	sum(int *parr, int size)
{
	int r;
	int i;

	r = 0;
	i = 0;
	while (i < size)
	{
		r = r + *parr++;
		i++;
	}
	return (r);
}

int	main(void)
{
	int	n;
	int *ptr;
	int i;
	int s;

	printf("Test Data:\n");
	printf("Input the number of elements to store iin the array (max 10): ");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		printf("Number %i: ", i);
		scanf("%d", &ptr[i]);
		i++;
	}
	s = sum(ptr, n);
	printf("The sum of array is: %i\n", s);
	return (0);
}
