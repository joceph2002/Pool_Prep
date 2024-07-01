#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Exercice --> print all value of 0
	int T [10];
	int i=0;
	while (i<10)
	{
		T[i]=0;
		i++;
	}
	i=0;
	while (i<10)
	{
		printf("T[%d]=%d \n",i,T[i]);
		i++;
	}


	//Exercice --> calculate average and sum and product of 10 numbers

	float T01[10];
	int j ;
	float S, P, M;

	printf("Enter a number in the Table.\n");
	
	j=0;
	while(j<10)
	{
		printf("T01[%d]= ",j);
		scanf("%f",&T01[j]);
		j++;
	}

	S=0;
	P=1;
	
	j=0;
	while (j<10)
	{
	
		S= S + T01[j];
		P= P * T01[j];
		j++;
	}
	
	M = S/10;

	printf("the sum is of the table is: %.2f\n",S);
	printf("the Product of the table is: %.2f\n",P);
	printf("the Average of the table is: %.2f\n",M);

	//Exercice --> 17.00 complete to the prevuios 
	
	int min, max,z;

	min = T01[0];
	
	for (z=1;z<10;z++)
	{
		if(min>T01[z])
			min=T01[z];
	}
	
	printf("the min is %d and max is ",min);

	//just keep watching in video 12 from 25.00 minutes

	//video 13 just watching not finished stop at 14.00
	
	//video 15 just watching
	

	return 0;
}







