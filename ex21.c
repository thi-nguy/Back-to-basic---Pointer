/* Write a program in C to print all the alphabets using a pointer */

#include <stdio.h>

int	main(void)
{
	char *ptr;
	char c = 'A';

	ptr = &c;
	while (*ptr <= 'Z')
	{
		printf("%c ", (*ptr)++);	// Take the value at *ptr, then increase the value to 1.
		/* printf("%c ", *ptr); */	// May do 2 steps or just 1 step as above.
		/* (*ptr)++; */
	}
	return (0);
}

