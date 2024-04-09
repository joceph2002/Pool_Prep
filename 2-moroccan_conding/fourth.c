#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int t9achar(int a, int b){
	if(a >b ){
		printf("%d is higher than %d",a,b);
	
	}else if(a == b ){
		printf("\n%d is equal to %d",a,b);
	}else{
		printf("\n%d is lower to %d", a,b);
	}
	
}

int main()
{

	int a,b;
	printf("What is your first number: \n");
	scanf("%d",&a);
	printf("what is your second number: \n");
	scanf("%d",&b);
	t9achar(a,b);
	printf("\n\n");
	
	//logical operators || is or - && is and != is not equal
	int age;
	char licence[5];
	char jawab[] = "yes";
	char jawab01[]= "Yes";
	printf("hello this is your car \n");
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Do you have a licence yes/no: ");
	scanf("%s", &licence);
	if (age >= 18 || strcmp(licence,jawab) == 0){
		printf("you can drive\n");
	}else if (age >= 18 || strcmp(licence,jawab01) == 0){
		printf("ah you can drive\n");
	}else{
		printf("sir t9awd\n");
	}

	//strcmp it compqres the if they are similar

	printf("\nthe answer is :%d\n",5!=5); // if 1mean true visversa

	printf("\n\n\n");
	printf("Calculator\n");


	    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operation symbol (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to consume whitespace characters

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(op == '+') {
        printf("The sum of %d + %d = %d\n", num1, num2, num1 + num2);
    } else if(op == '-') {
        printf("The subtraction of %d - %d = %d\n", num1, num2, num1 - num2);
    } else if(op == '*') {
        printf("The multiplication of %d * %d = %d\n", num1, num2, num1 * num2);
    } else if(op == '/') {
        if(num2 != 0) {
            printf("The division of %d / %d = %.2f\n", num1, num2, (float) num1 / num2);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Error: Invalid operator\n");
    }


	return 0;
}


