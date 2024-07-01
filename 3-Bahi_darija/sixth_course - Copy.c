#include <stdio.h>
#include <unistd.h>
#include <string.h>

//Fibonatchi recursion
int fib(int N)
{
	if (N<2)
		return N;
	else
		return fib(N-1)-fib(N-2);
}


int main() {


	// 2D Array for storing student grades
    float notes[5][3];  // 5 students, 3 subjects each
    float S, M;  // Variables to store sum and average
    int i = 0, j;  // Loop counters

    // Input grades for each student and each subject
    while (i < 5) {
        j = 0;
        while (j < 3) {
            // Prompt user to enter the grade for a specific student and subject
            printf("Enter the grade of student %d for subject %d: ", i + 1, j + 1);
            scanf("%f", &notes[i][j]);  // Read and store the grade
            j++;
        }
        i++;
    }

    // Calculate and display the average grade for each student
    i = 0;
    while (i < 5) {
        S = 0;  // Reset sum for each student
        j = 0;
        while (j < 3) {
            S += notes[i][j];  // Accumulate grades for each subject
            j++;
        }
        M = S / 3;  // Calculate average grade
        // Display the average grade for the current student
        printf("The average grade of student %d is %.2f\n", i + 1, M);
        i++;
    }
    printf("\n\n");

    // 3D Array for integer values
    int T[2][2][2];  // 2 blocks, each with 2 rows and 2 columns
    int i01, j01, k01;  // Loop counters

    // Input values into the 3D array
    i01 = 0;
    while (i01 < 2) {
        j01 = 0;
        while (j01 < 2) {
            k01 = 0;
            while (k01 < 2) {
                // Prompt user to enter a value for T[i][j][k]
                printf("Enter value for T[%d][%d][%d]: ", i01, j01, k01);
                scanf("%d", &T[i01][j01][k01]);  // Read and store the value
                k01++;
            }
            j01++;
        }
        i01++;
    }

    printf("\nThe elements of the table are:\n");

    // Display the elements of the 3D array
    i01 = 0;
    while (i01 < 2) {
        j01 = 0;
        while (j01 < 2) {
            k01 = 0;
            while (k01 < 2) {
                // Print the value of T[i][j][k]
                printf("%d ", T[i01][j01][k01]);
                k01++;
            }
            printf("\n");
            j01++;
        }
        printf("\n");
        i01++;
    }



    int M01[3][4];  // Declare a 2D array
    int i02, j02;
    int (*P)[4] = M01;  // Pointer to an array of 4 integers

    // Input values into the 2D array
    for (i02 = 0; i02 < 3; i02++) {
        for (j02 = 0; j02 < 4; j02++) {
            printf("M01[%d][%d] = ", i02, j02);
            scanf("%d", &P[i02][j02]);  // Use pointer to access elements
        }
    }

    int min = M01[0][0];  // Initialize min with the first element of M

    // Find the minimum value in the 2D array
    for (i02 = 0; i02 < 3; i02++) {
        for (j02 = 0; j02 < 4; j02++) {
            if (min > M01[i02][j02]) {
                min = M01[i02][j02];
            }
        }
    }

    printf("The minimum of M is: %d\n", min);

	printf("\n\n");
	
    char users[3][20] = {"admin", "med18", "amal16"};
    char login[20];
    int i03, x;
    
    printf("Enter your login: ");
    gets(login);

    x = 0;
    for (i03 = 0; i03 < 3; i03++) {
        if (strcmp(login, users[i03]) == 0) {  // Correct comparison
            x = 1;
            break;  // Move break inside the if block
        }
    }

    if (x == 1)
        printf("Welcome to the program, %s\n", login);
    else
        printf("Error, you are not allowed to use the program\n");

	printf("\n\n");
	int N;
	printf("enter a nuber :");
	scanf("%d",&N);
	printf("the terms of the suites of fibonnacci less or eaual %d are: \n",N);
	for (int h =0; h<=N;h++){
		printf("%d ",fib(h));
	}


    return 0;

}
