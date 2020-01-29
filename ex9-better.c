#include <stdio.h>
#include <stdlib.h>

int 	ft_max(int *ptr, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (ptr[i] > ptr[j]) 
		{
			j++;
			if (j == n)
				return (ptr[i]);
		}
		i = j;
	}
	return (ptr[i]);
}

int	main(void)
{
	int n;
	int i;
	int *ptr;

	printf("Test Data:\n");
	printf("Input total number of elements (1 to 100): ");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		printf("Number %i: ", i);
		scanf("%d", ptr);
		i++;
		if (i == n)
			break; //Add this to avoid the pointer go out of range.
		ptr++;
	}
	while (i > 1)
	{
		ptr--;
		i--;
	}
	int x = ft_max(ptr, n);
	free(ptr);		//free heap memory
	ptr = NULL;		//free heap memory
	printf("Expected Output: \n");
	printf("The largest element is : %i ", x);
	while (1);
	return (0);

}

