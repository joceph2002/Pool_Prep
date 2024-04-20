#include <stdio.h>
#include <unistd.h>
#include <math.h>
int main ()
{
	//Ex01 --> output next 10 number
	int inp , counter;
	
	printf("can you enter a number so we can give next 10 numbers: ");
	scanf("%d",&inp);
	counter = 1;
	while (counter <= 10)
		
	{
		inp++;
		counter++;
		printf("%d ",inp);
	}

	// Exercice 02 calculate the suite of ma9am 
	
	int inp01;
	float i01 =1, sum01 =0;

	printf("\n give the number your want to calculate: ");
	scanf("%d",&inp01);
	
	while(i01<=inp01)
	{
		sum01 = sum01+(1/i01);
		i01++;
		printf("%.2f ",1/i01);
	}
	printf("\nthe sum is: %.2f\n",sum01);

	//Exercice 03 create a program that taes n and calculate the sum of the power just for ODD number ex 5 --> 1 3 5 7 9 all in power and sum
	

	int inp02,sum02=0,i02=1,j=1;

	printf("input number of how many :");
	scanf("%d",&inp02);
	
	while (i02<=inp02)
	{
		sum02 =  sum02 + pow(j,2); 		
		i02++;
		j = j +2;
	}
	printf("\n the sum of all is : %d",sum02);
	
	// create a program the affiche les divisueis dun entier positif N non NUll 
	
	int N ,i03 =1;

	while (1)
	{
		printf("\nenter a number :");
		scanf("%d",&N);
		if (N>=0)
			break;
	}
	printf("\nthe number you input is %d",N);
	
	while (i03 <=N)
	{
		if(N%i03==0){
			printf("%d is divesed by %d\n",N,i03);
		}
		i03++;

	}

	/**At the birth of Amal, her grandfather Ali opens a bank account for her. Then, on each birthday, Amal's grandfather deposits 500 Moroccan dirhams into her account, to which he adds triple Amal's age. For example, when she is four years old, he deposits 512 dirhams. Write a program to determine how much money Amal will have on her nth birthday.*/

	int N01,i04=1,sum04=0;
	
	printf("HOw old is amal: ");
	scanf("%d",&N01);

	while(i04<=N01)
	{
		sum04 = sum04 + (500+ (i04*3));
		i04++;

	}
	printf("\nthe amal bank account now is %ddh",sum04);
	
	/*The population of the city of Marrakech is 1,000,000 inhabitants, and it increases by 50,000 inhabitants per year. The population of the city of Agadir is 500,000 inhabitants, and it increases by 8% per year. Write a program to determine in how many years the population of Agadir will exceed that of Marrakech.*/

	int marrak_pop = 1000000;
	int aga_pop = 500000;
	int years=0;

	while (marrak_pop>aga_pop)
	{
		marrak_pop += 50000;
		aga_pop += aga_pop*0.08;
		years++;
	}
	printf("\nagadir city will exceed marakkech in %d years",years);

	return 0;
}
