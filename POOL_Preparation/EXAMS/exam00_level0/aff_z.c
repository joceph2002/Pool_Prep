#include <unistd.h>

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		write(1, "z\n",2);
	}
	else
		write(1, "z\n",2);
	return 0;
}
