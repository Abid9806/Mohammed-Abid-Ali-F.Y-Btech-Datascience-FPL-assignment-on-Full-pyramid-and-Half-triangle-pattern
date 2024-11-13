//C program to print the full pyramid pattern
#include <stdio.h>

void printPyramid(int n) {
    // Loop over each row
    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars for the pyramid pattern
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n = 7;  // Replace 7 with the desired number of rows
    printPyramid(n);
    return 0;
}