#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structs 
struct Student{
	char name[20];
	int age;
	float grade;
};


int main()
{
	//Switch
	char grade;
	printf("What is your Grade (a/b/c)");
	scanf(" %c",&grade);
	switch(grade) {
	case 'a' :
		printf("you are Ecxellent");
		break;
	case 'b' :
		printf("You are Good");
		break;
	case 'c':
		printf("You are average");
		break;

	default :
		printf("NONe of the above");
	}

//we will call the structs
	
	struct Student student01;
	student01.age = 18;
	student01.grade = 17.5;
	strcpy(student01.name , "Youssef"); // this is for string

	// the %1f is for 1 numbers after the comma
	printf("\nHello i am %s and i Have %d i get %1f out of 20.\n", student01.name, student01.age, student01.grade);

	printf("\n\n\n");
	
	//While loop
	int i01=1, i02=5;
	while (i01 <= 5){
		printf("%d\n",i01);
		i01++;
	}
	printf("\n\n");
	do{
		printf("%d\n",i02);
		i02++;
	}while (i02 <= 10);
	
	printf("\n\n\n");
	// Guessing Game
	
	int guess_num = 5;
	int entered_num;
	int limit = 0;
	while (entered_num != guess_num){
		if (limit <= 5){
			printf("enter a number: ");
			scanf("%d",&entered_num);

		}else {
			break;
		}
		limit ++;

	}
	if (guess_num == entered_num){
		printf("You win");
	}else {
		printf("you lose");
	}

	printf("\n\n");
	//For Loop

	// for(initialization; check/test expression;updation)	
	//body consisting of multiple statements
	int list[] = {1,2,3,4,5};
	
	for(int l =0; l<5 ; l++){
		printf("%d\n",list[l]);
	}

	return 0;
}




