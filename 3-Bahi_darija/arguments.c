#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	//check if there are the correct number of arguments
	if (argc != 2){
		printf("More or less than 1. this file %s.\n",argv[0]);
		return 1; //return 1 to indicate an error
			  //and escape the below.
	}

	// Print a greeting for 1 person
	printf("Hello, %s .\n",argv[1]); // and can add more
	return 0;//return 0 to indicate success
}
