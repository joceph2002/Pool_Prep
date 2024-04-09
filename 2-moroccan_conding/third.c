#include <stdio.h>
#include <stdlib.h>

// Function to add two numbers and return the sum
int t9achar(int a, int b) {
    int result = a + b;
    return result;  // Return the result, not a + b
}

// Function to subtract two numbers and return the difference
int t9achar01(int a, int b) {
    return a - b;
}

// Function to print the multiplication of two numbers
void t9achar02(int a, int b) {
    printf("%d is the multiplication\n", a * b);
}

int main() {
    int a = 10;
    int b = 5;

    // Print the sum and subtraction using function calls
    printf("%d is the sum of %d and %d, and this is the subtraction %d\n",
           t9achar(a, b), a, b, t9achar01(a, b));

    // Call the multiplication function
    t9achar02(a, b);

    return 0;
}
