#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main() {
    int U, n05, Ui = 6, i06 = 1;

    printf("Enter a number: ");
    scanf("%d", &n05);

    while (n05 >= i06) {
        U = 4 * Ui + 10;
        i06++;
        Ui = U;  // Update Ui with the new value of U
    }

    printf("\nThis is worth %d\n", U);

	
    // Initialize variables for looping through rows and columns
    int i = 1, j;

    // Print the first row of column headers
    printf("x*y | ");
    while (i <= 10) {
        printf("%d  ", i);
        i++;
    }

    // Print a newline to start the table
    printf("\n");

    // Print the line separating the header from the table
    i = 1;
    while (i <= 18) {
        printf("--");
        i++;
    }

    // Print a newline to start the table
    printf("\n");

    // Loop through rows (1 to 10)
    i = 1;
    while (i <= 10) {
        // Print the row header
        printf("%d  | ", i);
        
        // Reset j for each new row
        j = 1;
        
        // Loop through columns (1 to 10) and print the product
        while (j <= 10) {
            printf("%d ", i * j);
            j++;
        }
        
        // Print a newline at the end of each row
        printf("\n");

        // Increment i for the next row
        i++;
    }
	
	printf("\n\n");
	
	//Game This game is very simple. The computer randomly selects a number between 1 and 30, and you have five attempts to guess it. After each attempt, the computer will tell you if the number you guessed is too big, too small, or if you have found the correct number.
#include <stdio.h>


    int correct_nmr = 30;
    int guessed_nmr, tries = 0, attempts = 1;

    printf("Welcome to the guessing game! The secret number is %d.\n", correct_nmr);

    while (attempts <= 5) {
        printf("Enter a number between 1 and 50: ");
        scanf("%d", &guessed_nmr);

        if (guessed_nmr == correct_nmr) {
            printf("Congratulations! You guessed the correct number after %d tries.\n", attempts);
            break;  // Exit the loop if the number is guessed correctly
        } else if (guessed_nmr < correct_nmr) {
            printf("The correct number is higher.\n");
        } else {
            printf("The correct number is lower.\n");
        }

        attempts++;
    }

    // Check if the player lost the game after all attempts
    if (attempts > 5) {
        printf("Oops! You ran out of attempts. The correct number was %d.\n", correct_nmr);
    }
	

	printf("\n\n");
	// calculator 28.00
	/*Write a program that uses a menu to perform the following operations: addition, subtraction, multiplication, division, modulus (remainder of integer division), and exponentiation. After choosing an operation, the program should ask the user to enter the two terms for the operation, and then display the result.

The program should also ask the user if they want to start another operation or exit the program.*/


	int operation;
	float F_number, S_number;
	char Decision;

	while (1)
	{
	
		printf("---Calculator Menu---");
		printf("\n1 - Addition.\n2 - Substraction\n3 - Multiplication.\n4 - Division.\n5 - The Reste of Division.\n6 - Power.\n");
		printf("\nChoose your Calculator (1 to 6): ");
		scanf("%d",&operation);
		printf("\nEnter the First Number: ");
		scanf("%f",&F_number);
		printf("\nEnter the second Number: ");
		scanf("%f",&S_number);
		
		if (operation == 1){
			printf("\nThe result is :%.2f",F_number + S_number);
		}else if (operation == 2)
		{
			printf("\nThe Result is :%.2f",F_number - S_number);
		}else if (operation == 3)
		{
			printf("\nThe Result is :%.2f",F_number * S_number);
		}else if (operation == 4)
		{
			printf("\nThe Result is :%.2f",F_number / S_number);
		}else if (operation == 5)
		{
			printf("\nThe Result is :%.2f",fmod(F_number, S_number));
		}else if(operation == 6)
		{	
			printf("\nThe Result is :%.2f",pow(F_number,S_number));
		}else
			printf("\nWrong Operation, Choose between 1 and 6");

	
		printf("\nDo you want to Repeat the caluculator(Y/N)?");
		scanf(" %c", &Decision);
		
		if(Decision == 'N')
			break;
	}
	printf("\n\n");

	int nbr =0, number;

	printf("input a number you want to count how many char");
	scanf("%d",&number);
	while(1)
	{
		nbr++;
		number = number /10;
		if (number == 0)
			break;

	}

	printf("\nthe total number is %d",nbr);
	printf("\n\n");

	int reverse =0 ,N,P;
	
	printf("Enter the number you want to REVERSE.");
	scanf("%d",&N);
	P = N;
	while(N != 0)
	{
		reverse = (reverse*10) + (N % 10);
		N = N /10;
	}
	printf("The Reverse Number is %d\n",reverse);
	printf("the Palindrone number is number that has the same value even if you reverse it like 161 and reverse 161.\n");
	if (P == reverse)
		printf("the Number is palindrome because, %d and reverse %d are equal.\n",P,reverse);
	else
		printf("the number is not palindrome because, %d is and reverve %d are not equal.",P,reverse);
		
    return 0;
}

