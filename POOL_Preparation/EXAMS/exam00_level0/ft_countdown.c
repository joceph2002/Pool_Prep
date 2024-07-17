#include <unistd.h>

void	ft_countdown(void)
{
	int	x;

	x = '9';
	while (x >= '0')
	{
		write(1, &x, 1);
		x--;	
	}
	write(1, "\n",1);
}
int	main()
{
	ft_countdown();
	return 0;
}
