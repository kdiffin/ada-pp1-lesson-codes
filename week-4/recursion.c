// factorial func using recurssion

// recurssion is when fuction is recalling itself n times
// but be careful with that as wrong defined start-end of loop
// can cause infinite-loop
#include <stdio.h>

int fact(int n){
    if (n == 1){
        return n;
    }
    return n *= fact(n-1);
}

int main(){
    printf("factorial is: %d", fact(5));
    return 0;
}

