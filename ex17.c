/* Write a program in C to print the elements of an array in reverse order. */

#include <stdio.h>
#include <stdlib.h>

void	swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	*sort(int *pnum, int n)
{
	int i = 0;
	int j = i + 1;

	while (i < n - 1)
	{
		if (pnum[i] < pnum[j])
			swap(&pnum[i], &pnum[j]);
		if (j == n - 1)
		{
			i++;
			j = i + 1;
		}
		else
			j++;
	}
	return (pnum);
}

int	main(void)
{
	int	n;
	int *ptr;
	int i;
	int j;

	printf("Test Data:\n");
	printf("Input total number of elements (1 to 100): ");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		printf("Number %i: ", i);
		scanf("%d", &ptr[i]);
		i++;
	}
	ptr = sort(ptr, n);
	printf("The elements in the array in reverse order are: \n");
	i = 0;
	while (i < n)
	{
		printf("element - %i : %i\n", i, ptr[i]);
		i++;
	}
	return (0);
}

