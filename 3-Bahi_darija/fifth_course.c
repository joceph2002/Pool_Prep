#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Dynamic Memory Allocation\n");

    // Using malloc to allocate memory for 3 integers
    printf("Using malloc:\n");
    int *x = malloc(3 * sizeof(int));
    if (x == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }

    // Initialize and print values of x
    *x = 1;
    *(x + 1) = 3;
    *(x + 2) = 15;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(x + i));
    }

    // Using calloc to allocate memory for 3 integers
    printf("\nUsing calloc:\n");
    int *y = calloc(3, sizeof(int));
    if (y == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }

    // Initialize and print values of y
    *y = 1;
    *(y + 1) = 3;
    *(y + 2) = 15;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(y + i));
    }

    // Free memory allocated by x
    free(x);

    // Memory is already freed, accessing x here would lead to undefined behavior
    // printf("%d\n", *(x + 0));
    // printf("%d\n", *(x + 1));
    // printf("%d\n", *(x + 2));

    printf("\n");

    // Program where the user decides the size of the array
    int n, i;
    float S, M;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    float *T = calloc(n, sizeof(float));
    if (T == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }

    // Input elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter element of T[%d]: ", i + 1);
        scanf("%f", (T + i));
    }

    // Calculate sum and average of elements in the array
    S = 0;
    for (i = 0; i < n; i++) {
        S = S + *(T + i);
    }
    M = S / n;

    printf("The sum of elements in the array is %.2f\n", S);
    printf("The average of elements in the array is %.2f\n", M);

    // Free memory allocated by T
    free(T);

    return 0;
}
