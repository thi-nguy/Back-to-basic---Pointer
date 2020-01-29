/* Write a program in C to show a pointer to an array which contents are pointer to structure. */

#include <stdio.h>

struct info
{
	char *name;
	int id;
};

int	main(void)
{
	struct info person1 = {"Abraham", 12};
	struct info person2 = {"Paster", 34};
	struct info person3;
	struct info *arr[] = {&person1, &person2, &person3};
	struct info (*(*ptr)[3]) = &arr;

	person3.name = "Marie";
	person3.id = 56;

	printf("Employee 2 name: %s\n", person2.name);
	printf("Employee 2 name: %s\n", arr[1]->name);
	printf("Employee 2 name: %s\n", (*arr[1]).name);
	printf("Employee 2 name: %s\n", (**(arr + 1)).name);
	printf("Employee 2 name: %s\n", (*(*ptr + 1))->name);
	printf("Employee 2 name: %s\n", (**(*ptr + 1)).name);

	printf("Employee 2 ID : %i\n", person2.id);
	printf("Employee 2 ID : %i\n", arr[1]->id);
	printf("Employee 2 ID : %i\n", (*arr[1]).id);
	printf("Employee 2 ID : %i\n", (**(arr + 1)).id);
	printf("Employee 2 ID : %i\n", (*(*ptr + 1))->id);
	printf("Employee 2 ID : %i\n", (**(*ptr + 1)).id);

	return (0);
}
