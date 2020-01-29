/* Write a program in C to print a string in reverse using a pointer. */

#include <stdio.h>

int	main(void)
{
	char *ptr;
	char str[50];
	int i;

	printf("Test Data: \n");
	printf("Input a string: ");
	fgets(str, sizeof (str), stdin);
	ptr = str;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		ptr++;
	}
	printf("Reverse of the string is: ");
	while (i >= 0)
	{
		printf("%c", *ptr--);
		i--;
	}
	return (0);
}
