// lab2 - print either num is odd or even
// for lab3 please refer to if-elif-else.c to 2nd block of code
#include <stdio.h>

int main(void){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a%2 == 0){
        printf("Num you have entered is even");
    }
    else{
        printf("Num you have entered is odd");
    }

    return 0;
}
