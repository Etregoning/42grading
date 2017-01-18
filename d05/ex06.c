#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int result1;
	int result2;
	int result3;

	result1 = ft_strcmp("Hello World", "Goodbye World");
	printf("String 1: Hello World\nString 2: Goodbye World\n");
	printf("Expected Output:\n1\n");
	printf("Output:\n%d\n\n", result1);

	result2 =  ft_strcmp("Hello World", "Hi");
	printf("String 1: Hello World\nString 2: Hi\n");
	printf("Expected Output:\n-1\n");
	printf("Output:\n%d\n\n", result2);

	result3 = ft_strcmp("Hello World", "Hello World");
	printf("String 1: Hello World\nString 2: Hello World\n");
	printf("Expected Output:\n0\n");
	printf("Output:\n%d\n\n", result3);
}
