/* Write a program in C to calculte the length of the string using a pointer. */

#include <stdio.h>

int	ft_strlen(char *ptr)
{
	int i = 0;
	while (*ptr++)
		i++;
	return (i);
}

int main(void)
{
	char str[] = "w3resource";
	char *ptr = str;
	printf("The length of the given string w3resource is: %i", ft_strlen(ptr));
	return (0);
}
