#include <stdio.h>

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    
    if (N % 2 == 0) {
        N--;
    }

    
    while (N >= 1) {
        printf("\n %d ", N);
        N -= 2;
    }

    return 0;
}
