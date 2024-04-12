#include <unistd.h>
#include <stdio.h>

//Functions 
//min and max and average and sign and asking user and global

//global variables
int a,b;

void asking_user ()
{
	printf("Welcome to caclulator.\n");
	printf("Enter your First number A: ");
	scanf("%d",&a);
	printf("Enter your second number B: ");
	scanf("%d",&b);
}

void sign_ofproduct ()
{
	if (a*b>0)
		printf("the sign is POsitive +.\n");
	else
		printf("the sign is negative -.\n");
		
}

int min ()
{
	if (a>b)
		return b;
	else
		return a;	
}

int max ()
{
	int max;
	if (a>b)
		max = a;
	else
		max = b;
	return max;
}

float average ()
{
	return (a+b)/2.0; //// Use 2.0 instead of 2 for floating-point division
}


int calculator()
{
	asking_user();
	sign_ofproduct();
	printf("\nthe max is %d",max());
	printf("\nthe min is %d",min());
	printf("\nthe average is %.2f",average());
}

int main()
{
	calculator();
	return 0;
}










