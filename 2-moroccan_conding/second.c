#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sayhi(char namedialk[], int agedialk);

int main()
{

//Arrays --> start from 0index
	
	int age[6]= {18,29,39,48,50,60};
	printf("%d\n",age[0]);
	printf("%d\n",age[1]);
	printf("%d\n",age[5]);
	age[0]= 20;
	printf("%d\n\n\n",age[0]);


//Function --> there is void and main func that is the boss here

	int age01;
	char smia[10];
	printf("what is your Name: ");
	scanf("%s", smia);
	printf("\nWhat is your age :");
	scanf("%d", &age01);
	sayhi(smia,age01);
	

	return 0;
}

void sayhi(char namedialk[],int agedialk)
{
	printf("Hi %s your age is %d.\n",namedialk, agedialk);

}


