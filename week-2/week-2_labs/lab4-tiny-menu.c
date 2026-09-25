// lab4 - tiny menu with switch
// for lab3 please refer to if-elif-else.c to 2nd block of code
#include <stdio.h>

int main(void){
    char option;
    int a;
    int b;

    printf("enter option what do you want to do with numbers\n1 - add\n2 - subtract\n3 - multiply: ");
    scanf("%c", &option);

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    //break is used so it would do only one case and dont go to others
    //terminating the program
    
    switch(option){
        case '1':
            printf("The sum of %d and %d is %d",a,b,a+b);
            break;
        case '2':
            printf("The difference of %d and %d is %d",a,b,a-b);
            break;
        case '3':
            printf("The multiplication of %d and %d is %d",a,b,a*b);
            break;
        default:
            printf("Something else is pressed, try again");
            break;
    }
    return 0;
}
