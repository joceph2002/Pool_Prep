#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
//Pointers

void maximum(int *x,int *y, int *m)
{
	if (*x > *y)
		*m = *x ;
	else
		*m = *y ;

}

int main()
{
	int a ,b , max;
	printf("ENter your first number: ");
	scanf("%d",&a);	
	printf("Enter your second number: ");
	scanf("%d",&b);
	maximum(&a,&b,&max);
	printf("the maxixmum number is :%d",max);
	
	printf("\n\n");

	// tables and Pointers
	
	int A[] = {12,23,34,45,56,67,78,89,90};
	int *P;
	P=A;
int i = 0;
	while (i<9)
	{
		printf("%p \n",&A[i]);
		printf("%d \n",A[i]);
		i++;
	}
	printf("\n\n");
	// asking user to add elements to table and checking min
	
	int T01[10];
	int min;
	int *P01;
	P01=T01;

	printf("can a number to the table :\n");
	while (P01 <T01 +10)
	{
		printf("T01[%d] = ", P01 - T01);
		scanf("%d",P01);
		P01++;
	}

	min = *T01;
	for (P01 = T01+1 ; P01<T01+10 ; P01++){
		if (min > *P01)
			min = *P01;
	}
	
	printf("the min is %d", min);

	return 0;
}
