#include <stdio.h>
#include <string.h>

//Fibonacci recursion
int fib(int N) {
    if (N <= 1)
        return N;
    else
        return fib(N - 1) + fib(N - 2);
}

int main() {
    // Variables to store sum and average
    float S, average;  // Renamed 'M' to 'average' for clarity
    int i = 0, j;  // Loop counters

    // Input grades for each student and each subject
    // Your existing code for inputting grades here

    // Calculate and display the average grade for each student
    // Your existing code for calculating and displaying averages here

    printf("\n\n");

    // 3D Array for integer values
    int T[2][2][2];  // Declare and initialize a 3D array
    int i01, j01, k01;  // Loop counters

    // Input values into the 3D array
    // Your existing code for inputting values into the 3D array here

    printf("\nThe elements of the table are:\n");

    // Display the elements of the 3D array
    // Your existing code for displaying 3D array elements here

    // 2D Array for integer values
    int matrix[3][4];  // Renamed 'M' to 'matrix' for clarity
    int i02, j02;
    int (*P)[4] = matrix;  // Pointer to an array of 4 integers

    // Input values into the 2D array
    // Your existing code for inputting values into the 2D array here

    int min = matrix[0][0];  // Initialize min with the first element of the matrix

    // Find the minimum value in the 2D array
    // Your existing code for finding the minimum value in the 2D array here

    printf("The minimum of the matrix is: %d\n", min);

    printf("\n\n");

    // Login system
    // Your existing code for the login system here

    printf("\n\n");

    // Fibonacci series
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("The terms of the Fibonacci series less than or equal to %d are:\n", N);
    for (int h = 0; h <= N; h++) {
        printf("%d ", fib(h));
    }

    return 0;
}
