/* Write a program in C to show the usage of pointer to structure. */

#include <stdio.h>

char	*ft_strcpy(char *d, char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct		info
{
	char *name;
	char address[50];
	int		code;
};

int	main(void)
{
	// Direct Declaration and Specification of struct:

	struct info client1 = {.name = "John Alter", .address = "Court Street", .code =  3456};
	struct info client2 = {"Adam Smith", "Happy Street", 7890};
	struct info client3;
	struct info *ptr;

	// Specification of a Struct:

	client3.name = "Louis Paster";			// with pointer, no need to use strcpy
	ft_strcpy(client3.address, "Rue de Chat");
	client3.code = 4321;
	ptr = &client1;

	printf("Expected Output: \n");

	// How to access elements of Struct:
	// If element is a pointer, there is no different. But access struct through a pointer
	// (here is ptr), it should follow -> instead of .

	printf("%s from %s has the pin code: %i\n", ptr->name, ptr->address, (*ptr).code);
	printf("%s from %s has the pin code: %i\n", client2.name, client2.address, client2.code);
	printf("%s from %s has the pin code: %i\n", client3.name, client3.address, client3.code);
	
	return (0);
}
