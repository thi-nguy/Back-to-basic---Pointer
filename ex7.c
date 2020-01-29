/* Write a program in C to store n elements in an array and print the elements using pointer. */

#include <stdio.h>

int	main(void)
{
	int n;
	int i = 0;
	printf("Test Data\n");
	printf("Input the number of elements to store in the array:\n");
	scanf("%d", &n);

	int arr[n];
	int *ptr = arr;
	printf("Input %i number of elements in the array:\n", n);
	while (i < n)
	{
		printf("element - %i: ", i);
		scanf("%d", &arr[i]);
		i++;
	}
	printf("Expected Output:\nThe elements you entered are:\n");
	i = 0;
	while (i < n)
	{
		printf("element - %i : %i\n", i, *ptr++);
		i++;
	}
	return (0);
}
