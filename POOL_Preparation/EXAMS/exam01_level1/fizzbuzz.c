#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n/10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	fizz_buzz()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 ==0)
			ft_putstr("fizzbuzz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else
			printnbr(i);
		ft_putchar('\n');
		i++;
	}
}
