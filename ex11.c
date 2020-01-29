/* Write a program in C to swap elements using call by references. */

#include <stdio.h>

void	ft_swap(int *a1, int *a2, int *a3)
{
	int tmp;
	tmp = *a1;
	*a1 = *a3;
	*a3 = *a2;
	*a2 = tmp;
}

int	main(void)
{
	int x, y, z; 
	printf("Test Data:\n");
	printf("Input the value of 1st element: ");
	scanf("%d", &x);
	printf("Input the value of 2nd element: ");
	scanf("%d", &y);
	printf("Input the value of 3th element: ");
	scanf("%d", &z);
	printf("Exptected Output: \n");
	printf("The value before swapping are: \n");
	int i = 1;
	printf("element 1 = %i\nelement 2 = %i\nelement 3 = %i\n", x, y, z);
	ft_swap(&x, &y, &z);
	printf("The value after swapping are: \n");
	printf("element 1 = %i\nelement 2 = %i\nelement 3 = %i\n", x, y, z);
	return (0);
}

