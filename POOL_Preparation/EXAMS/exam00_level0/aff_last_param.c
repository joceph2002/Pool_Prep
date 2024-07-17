#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	length;
		
		length = 0;
		while(argv[argc-1][length] != '\0')
		{
			length++;
		}
		write(1,argv[argc-1],length);
	}
	write(1,"\n",1);
	return 0;
}
