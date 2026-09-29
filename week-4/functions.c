#include <stdio.h>

// int square is a function which will take
// some integer x and then return us it's squared
int square(int x){
    return x*x;
}

// you can use void instead of int to define a func
// but in that case: it returns no value, so it dosen't require "return 0;" at the end
// AND ofc value generated inside it cannot be stored in variable
// primaraly it's used to printing a text, updating values....
void square_print(int z){
    printf("Square value of %d is %d\n",z, z*z);
}

int main(){
    int y = square(5); //there we're calling this funtion and storing its returned value to variable y
    printf("5^2 equals: %d\n", y);
    printf("6^2 equals: %d\n", 6);
    square_print(3);
    return 0;
}