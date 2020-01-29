
#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
    int n = 5;
    int i;
    int *ptr;
    
    printf("Test Data:\n");
    printf("Input total number of elements (1 to 100): 5\n");
    ptr = (int*)malloc(sizeof(int) * n);
    int arr[5] = {3, 6, 3, 4, 5};
    ptr = arr;
    for(i = 1; i < n; ++i)
    {
        if(*ptr <*(ptr + i))
            *ptr = *(ptr + i); //This way will change the first element of array.
                                // In ex9.c, I didn't change the first element of array.
    }
    printf("Expected Output: \n");
    printf("The largest element is : %i ", *ptr);
    return (0);
}
