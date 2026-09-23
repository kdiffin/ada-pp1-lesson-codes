//lab1 - compare two numbers and print larger one

#include <stdio.h>

int main(void){
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        printf("The highest number is: %d", a);
    }
    else{
        printf("The highest number is: %d", b);
    }

}
