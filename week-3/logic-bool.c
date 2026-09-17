#include  <stdio.h>

int main(void) {
    int a = 1;
    int b = 0;

    if (a) {
        printf("a is true\n");
    } else {
        printf("a is false\n");
    }

    //in C indentation is not important, but don't be a "gozel insan" and write code like this, it will be hard to read and understand, so always use indentation
    if (b) {
    printf("b is true\n");
    } else {
    printf("b is false\n");
    } 

    //looks weird, right? but this is how it works in C, 0 is false and anything else is true
    //something similar we did at logic.c

    return 0;
}