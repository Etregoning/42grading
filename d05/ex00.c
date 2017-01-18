#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char str1[] =  "Hello World";
	printf("Expected output:\nHello World\n\nOutput:\n");
	ft_putstr(str1);
	ft_putchar('\n');
	return(0);
}
