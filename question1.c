#include<stdio.h>

int main() {

int number, i;

unsigned long long factorial =1;

printf("enter a positive integer:");

scanf("%d", &number);

if (number < 0){

printf("error:factorial is not defined for negetive numbers.\n");

return 0;

}

for(i=1; i<=number;++i) {

factorial*=i;

}

printf("the factorial of %d is %llu.\n",number,factorial);

return 0;
