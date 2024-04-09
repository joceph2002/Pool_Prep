#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

	//i will test this at the beginning
	
	char fullname01[20];
	printf("ur full name :");
	fgets(fullname01,20,stdin); //so it worked now


	// i did [] so it can store +chararcters list of char

	char name [] = "youssef";
	int age = 19;
	char grade = 'A';
	double no9ta = 18.5;

	//this is for constant can not be change
	const int Las9a = 20;

	int num01 = 15;
	float num02 = 15.5;
	float num03 = num01 - num02;
	//only different between the char is one has two quotes and 		other has one quote
	printf("hada ana smiti %s o andi %d\n",name ,age);
	printf("o %s kayt3alm c \n",name);
	printf("hadi hia constant --> %d\n",Las9a);
	printf("%s scora %c f exam 7it jab %f \n",name ,grade, no9ta);
	printf("walakin lowl jab %f. o grade dialo %c tahowa\n", 19.5, 'A');
	printf("this is %d + %f = %f\n",num01 ,num02, num01+num02 );
	printf("%f\n",18.5+19 );


	/*there are some ready functions
	fff
	ss
	*/


	printf("%f ",pow(2,2)); //must do float to get you the value not int
	printf("%f", sqrt(36)); //racine
	printf("\n\n\n\n");

	//USER INPUT
	
	char smia[10]; //you gave how many character you want to input/store 
	char fullname[20];
	char gradee;
	double inptt;
	
	printf("Enter ur nakename: \n");
	scanf("%s",&smia);
	printf("Enter your Grade: \n");
	scanf(" %c",&gradee); //must add the space before %c to consume any 
			      //whitespaces character left
	printf("Enter your age in float: \n");
	scanf("%lf",&inptt); //%lf --> to get float from user
	
	//to get input from user with spaces between them use fgets() instead of 			scanf() because it does not support it.
	/*
	printf("What is your full name: \n");
	fgets(fullname, sizeof(fullname), stdin); //this get the name of the variable and how 			      // many characters and stdin it means standard input.

*/
	printf("Hi %s aka %s, your age is %f and your score is %c. \n",fullname01, smia, inptt, gradee );

	printf("\n\n\n This Is Calculator \n\n");
	
	
	double nmrr01,nmrr02;
	printf("Enter your first number x: ");
	scanf("%lf",&nmrr01);
	printf("\nEnter your Second number y: ");
	scanf("%lf",&nmrr02);
	printf("The Sum of %f + %f = %f\n",nmrr01, nmrr02, nmrr01+nmrr02);
	printf("the mul of %f * %f = %f\n",nmrr01, nmrr02, nmrr01*nmrr02);

	printf("\n\nThis is short story\n");

	char smiadialdri[10],product[15],decision[12];
	int price;

	printf("what is your name: \n");
	scanf("%s",&smiadialdri);
	printf("what you bought: \n");
	scanf("%s",&product);
	printf("what the price :\n");
	scanf("%d",&price);
	printf("what's your decision(Yes/No): \n");
	scanf("%s",&decision);

	printf("wahad dri smito %s ",smiadialdri);
	printf("mcha ichri %s ",product);
	printf("lga taman dialo dayar %ddh li hia %d$ ",price, price/10);
	printf("At the end gal %s ltaman o rja3 ldar",decision);



	return 0;

}






