#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[100];
	char *a;
	char *b;

	a = "Hello World";
	b = ft_strncpy(dest, a, 12);
	printf("Expected Output:\nHello World\n\n");
	printf("Output:\n%s\n", b);

}
