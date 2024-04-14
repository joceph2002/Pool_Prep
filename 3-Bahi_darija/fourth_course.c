#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize variables
    char list[] = "Hello";
    char c[10];
    char *list01 = "assat"; // Pointer to a constant string
    char C1[] = "hello worLd";
    char C2[100];
    int i01 = 0;

    // Print strings and characters
    printf("%s %s %c\n", list, list01, list[3]);

    // Get user input using gets function (unsafe, avoid using gets)
    printf("Enter your name: \n");
    gets(c); // Deprecated, not recommended due to buffer overflow vulnerability
    printf("Using gets(): %s\n", c);

    // Print a string using puts function
    puts(c);

    // Get user input using scanf function
    char c01[10];
    printf("Enter your name again: \n");
    scanf("%s", c01);
    printf("Using scanf(): %s\n", c01);

    // Copy characters from C1 to C2
    printf("Copy characters from C1 to C2:\n");
    while (C1[i01] != '\0') {
        C2[i01] = C1[i01];
        i01++;
    }
    C2[i01] = '\0'; // Add null terminator to end C2
    printf("C1: %s\n", C1);
    printf("C2: %s\n", C2);
    printf("Total number of characters copied: %d\n", i01);

    // Additional functions from string.h library
    printf("\nString Functions from string.h Library:\n");
    printf("1. strlen(c01): %zu\n", strlen(c01)); // Length of a string
    printf("2. strcpy(c, c01): %s\n", strcpy(c, c01)); // Copy string
    printf("3. strcat(c, list): %s\n", strcat(c, list)); // Concatenate strings
    printf("4. strcmp(c01, list): %d\n", strcmp(c01, list)); // Compare strings
    printf("5. strchr(c01, 'e'): %s\n", strchr(c01, 'e')); // Locate character in string
    printf("6. strrchr(c01, 'e'): %s\n", strrchr(c01, 'e')); // Locate last occurrence of character in string
    printf("7. strstr(c01, list): %s\n", strstr(c01, list)); // Locate substring in string
    printf("8. strrev(c01): %s\n", strrev(c01)); // Reverse string
    printf("9. strlwr(c01): %s\n", strlwr(c01)); // Convert string to lowercase
    printf("10. strupr(c01): %s\n", strupr(c01)); // Convert string to uppercase

    return 0;
}
