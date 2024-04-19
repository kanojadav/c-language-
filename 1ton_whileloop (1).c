#include <stdio.h>

int main() {
    int N, num = 1;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (num <= N) {
        printf("\n %d ", num);
        num++;
    }

    return 0;
}
