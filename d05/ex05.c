#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("String: Hello World\nSubstring: Hello\n\n");
	printf("Expected Output:\nHello\n\nOutput:\n");
	printf("%s\n", ft_strstr("Hello World", "Hello"));
	return (0);	
}


