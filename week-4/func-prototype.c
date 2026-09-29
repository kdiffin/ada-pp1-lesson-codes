#include <stdio.h>

int square(int x);

int main(){
    int y = square(5);
    printf("5^2 equals: %d\n", y);
    printf("6^2 equals: %d\n", square(6));
    return 0;
}

int square(int x){
    return x*x;
}

// looks weird but it also works as you first define function
// and then give it parameters what to do
// as C is a compiler-based prog lang, not a interpreter-based
// it would read it full and then turn it into exe
// so C wouldnt see anything strange