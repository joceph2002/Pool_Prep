#include <stdio.h>
#include <unistd.h>

int main()
{
	//create a program that get date of birth and give ages//
	
	int age;
	printf("what is your birth date.");
	scanf("%d",&age);
	age = 2024 - age;
	printf("you have %d years old\n",age);
	printf("\n\n");
	float a,b;
	printf("enter your first number A; ");
	scanf("%f",&a);
	printf("\nenter your second number B: ");
	scanf("%f",&b);
	printf("the sum is %.2f\n",a+b);
	printf("the subsctraction is %.2f\n",a-b);
	printf("the product is %.2f\n",a*b);
	printf("the division is %.2f\n",a/b);
	printf("\n\n");
	int x,y,temp;
	printf("enter the value of X;");
	scanf("%d",&x);
	printf("\nenter the value of Y; ");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("the value of X is %d ;\n",x);
	printf("the value of Y is %d ;\n",y);
	printf("\n\n");
	int T,sec,hour,minu,R ;
	printf("enter the time in second; ");
	scanf("%d",&T);
	hour = T/3600;
	R = T % 3600;
	minu = R /60;
	sec = R % 60;
	printf("%dh %dm %ds",hour,minu,sec);
	printf("\n\n");

	//Conditionals
	
	//exercice ==> 0.3dh for first 10 papers, 0.25dh for second 				20th and 0.2dh for the rest.
	int N;
	float total;
	printf("give me the number of paper you wanna print: ");
	scanf("%d",&N);
	total = 0;
	if (N <=10)
	{
		total = N *0.3;
	}else if (N <=20)
	{
		total = 10*0.3+(N-10)*0.25;
	}else
		total = 10*0.3 +20*0.25+(N-30)*0.2;
	
	printf("the total number is %.2fdh",total);
	printf("\n\n");
	age = 0;
	printf("give me your son's age : ");
	scanf("%d",&age);
	if (6>=age && age<=7){
		printf("POssin");
	}else if(8>=age && age<=9)
	{
		printf("PUpille");
	}else if(10>=age && age<=11)
	{	
		printf("Minime");
	}else
		printf("cadet");
	printf("\n\n");
	
	int grade01,grade02,grade03,grade;
	printf("enter your first grade;");
	scanf("%d",&grade01);
	printf("\nenter your second grade");
	scanf("%d",&grade02);
	printf("\nenter your third grade");
	scanf("%d",&grade03);
	grade = (grade03+grade02+grade01)/3;
	printf("%d",grade);
	if (grade <10){
		printf("Insuffisant");
	}else if (grade <12 && grade>=10 ){
		printf("Passable");
	}else if (grade <14 && grade >=12 ){
		printf("Assez Bien");
	}else if (grade <16 && grade >=14 ){
		printf("Bien");
	}else if (grade >= 16){
		printf("Tres Bien");
	}
	
	printf("\n\n");
	age =0;
	char sexe;
	printf("enter your age");
	scanf("%d",&age);
	printf("\nenter your sexe (H/F)");
	scanf(" %c", &sexe);
	if (sexe == 'H' && age > 20)
	{
		printf("you must pay taxes");
	}else if(sexe == 'F' && age <=35 && age >18 )
	{
		printf("hey lady you must pay taxes");
	}else 
		printf("you don't have to pay taxes");


	return 0;


}
