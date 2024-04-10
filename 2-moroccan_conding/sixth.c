#include <stdio.h>
#include <unistd.h>



int main ()
{
	
//2D Array

	//int nums[2][3] = {1,2,3,4,5,6};  this is also true
	int nums [2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	printf("%d\n",nums[0][0]);
	printf("%d\n\n",nums[1][2]);

	//to write them all instide use for loop
	for (int i =0; i<2 ;i++){ //this is for rows
		for(int k = 0; k<3 ; k++){ // for columns
			printf("%d\n",nums[i][k]);
		}
	}
	printf("\n\n");
	
	//int nums01[3][2][2] ={0,5,6,10,7,2,6,4,5,9,0,8} ;
	//also correct but not clear
	
	int nums01[2][2][3] = {
		{{0,5,6},{4,6,17}},
		{{10,7,2},{5,65,80}},
	};
	printf("%d\n",nums01[1][1][1]);//65
	printf("%d\n",nums01[1][0][2]);//2
	printf("%d\n",nums01[0][1][2]);//17
	
	printf("\n\n");
	
	for (int z =0; z <2; z++){
		for (int x =0; x<2; x++){
			for (int y =0 ; y<3; y++){
				printf("%d\n",nums01[z][x][y]);
			}

		}
	}
	
	printf("\n\n");


	return 0;
}
