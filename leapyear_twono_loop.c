#include <stdio.h>

int main() {
    int startYear, endYear;

    
    printf("Enter the starting year: ");
    scanf("%d", &startYear);
    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    
    int year = startYear;
    while (year <= endYear) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("\n %d ", year);
        }
        year++;
    }

    return 0;
}
