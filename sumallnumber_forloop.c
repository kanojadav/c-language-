#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Enter the value of n: ");
    scanf("\n %d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
