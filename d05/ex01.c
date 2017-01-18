#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;

	a = 1;
	b = 22;
	c = 333;
	d = 4444;
	e = 55555;
	f = -1;
	g = -22;
	h =  -333;
	i = -4444;
	j = -55555;
	printf("Expected output:\n1\n22\n333\n4444\n55555\n-1\n-22\n-333\n-4444\n-55555\n\nOutput:\n");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
	ft_putnbr(e);
	ft_putchar('\n');
	ft_putnbr(f);
	ft_putchar('\n');
	ft_putnbr(g);
	ft_putchar('\n');
	ft_putnbr(h);
	ft_putchar('\n');
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	return (0);
}


