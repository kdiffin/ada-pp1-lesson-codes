#include <stdio.h>

// switch is like small bro of if-elif-else
// it cannot take any other condion rather than == (equal to)
// if you have big if-elif-else where you need to check equality of sides
// it is better to use switch, as it more readable and easier to use, and it is faster


int main(void){
    char option;

    printf("enter some num: ");
    scanf("%c", &option);

    switch(option){
        case '1':
            printf("1 is pressed");
        case '2':
            printf("1 is pressed");
        default:
            printf("something else is pressed");
    }
    return 0;
}