#include <unistd.h>

void	hello(void)
{
	write(1, "Hello World!\n",13);
}

int	main()
{
	hello();
	return 0;
}
