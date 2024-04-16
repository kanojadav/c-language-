#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    char ch = 'A'; // Starting character

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for each row
        for (int j = 1; j <= rows - i + 1; j++) {
            printf("%c ", ch);
            ch++;
        }
        ch = 'A'; // Reset the character for the next row
        printf("\n"); // Move to the next line for the next row
    }

    return 0;
}
