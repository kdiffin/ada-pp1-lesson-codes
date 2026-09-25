#include <stdio.h>

int main(void){
    int n = 10;

// you will be surised, but you can write small if statements without brackets
if (n == 10)
    printf("num is equal to 10\n");
else
    printf("num is smaller than 10\n");

// but each conditional block can only take 1 command in block
//e.g
// if (n==10)
//    printf("num is equal to 10");
//    printf("num is equal to 10");
// else if (n>10)
//    printf("num is equal to 10");
// this would be WRONG, as if block wouldnt take second printf
// and second printf wouldnt be dependable from if
// and ofc else if would be "disconnected" from if

//nested if's:
// 1. program would execute if(n>=10) condition
// if it's TRUE then it would go to if-else inside first if
// and would execute that one which satisifed

// tbh this isnt a best example as you can do if-elif-else statement
// with combining && (AND) operator but ofc it's just to show the nested if logic
n = 11;
if(n >= 10){
    if (n%2 == 0){
        printf("Your num is bigger or equal to 10 and it's even");
    }
    else{
        printf("Your num is bigger or equal to 10 and it's odd");
    }
}
else{
    printf("Your num is smaller than 10");
}

    return 0;
}
