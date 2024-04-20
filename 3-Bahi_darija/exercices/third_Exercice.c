#include <stdio.h>

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


	




    return 0;
}

