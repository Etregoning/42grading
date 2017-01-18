#include <stdio.h>

char	ft_strcpy(char *dest, char *src);

int	main(void)
{
	char x[100] = "Hello World";
	char y[100] = "Goodbye World";

	printf("Expected output:\nHello World\n\n");
	ft_strcpy(y, x);
	printf("Output:\n%s\n", y);
	return(0);
}
