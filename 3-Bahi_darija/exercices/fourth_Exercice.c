#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main ()
{
	printf("\n--- Welcome to Desing Class---\n\n");
	
	int H,W,i,j;

	printf("\nEnter the width of the rectangle.");
	scanf("%d",&W);
	printf("\nEnter the Height of the rectagle.");
	scanf("%d",&H);

	for (i=1;i<=H;i++)
	{
		for(j=1;j<=W;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	//creat a Pyramid based on user input
	int nmr_lines,i01=1,j01;

	printf("Enter the number of lines in the pYramid: ");
	scanf("%d",&nmr_lines);

	while(i01<=nmr_lines)
	{
		j01=1;
		while(j01<=i01)
		{
			printf("* ");
			j01++;
		}
		printf("\n");
		i01++;
	}
	
	printf("\n\n");

	//create a rettagle based on user imput and empty inside
	
	
	int H02,W02,i02,j02;

	printf("\nEnter the width of the rectangle.");
	scanf("%d",&W02);
	printf("\nEnter the Height of the rectagle.");
	scanf("%d",&H02);

	for (i02=1;i02<=H02;i02++)
	{
		for(j02=1;j02<=W02;j02++)
		{
			if(i02 == 1|| j02==1||i02==H02||j02==W02)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

	printf("\n\n");
	
	//Write a program that allows the user to enter the length of one side L of a square, and then the program draws the following shape (L = 5):
	
	int L03 =5,i03=1,j03;

	while (i03<=L03)
	{
		i03++;
		j03=1;
		while(j03<=L03)
		{
			if(i03==1 ||j03==1 ||i03==L03 ||j03==L03 ||i03==j03 ||j03==L03-i03+1)
				printf("* ");
			else
				printf("  ");
			j03++;
		}
	printf("\n");
	}

	

	return 0;
}
