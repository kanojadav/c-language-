#include <stdio.h>

int main() {
    int x, y;
    int result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = (x - y) * (x - y);

    printf("(x - y)^2 = %d\n", result);

    return 0;
}
