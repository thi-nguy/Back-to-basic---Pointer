/* Write a program in C to count the number of vowels and consonants in a string using a pointer. */

#include <stdio.h>

int	is_vowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}	

int	main(void)
{
	char *ptr;
	char str1[50];
	int i;
	int j;

	printf("Test Data: \n");
	printf("Input a string: ");
	fgets(str1, sizeof (str1), stdin);
	ptr = str1;
	i = 0;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr = *ptr + 32;
		i++;
		ptr++;
	}
	while (i > 0)
	{
		ptr--;
		i--;
	}
	i = 0;
	j = 0;
	while (*ptr != '\0')
	{
		if ((*ptr >= 'a') && (*ptr <= 'z'))
		{
			if(is_vowel(*ptr))
				i++; 
			else
				j++;
		}	
		ptr++;
	}
	printf("Number of vowels: %i\n", i);
	printf("Number of constant: %i\n", j);
	return (0);
}
