#include <stdio.h>

int main(void){
    int n = 10;

// you will be surised, but you can write small if statements without brackets
if (n == 10)
    printf("num is equal to 10");
else
    printf("num is smaller than 10");

// but each conditional block can only take 1 command in block
//e.g
// if (n==10)
//    printf("num is equal to 10");
//    printf("num is equal to 10");
// else if (n>10)
//    printf("num is equal to 10");
// this would be WRONG, as if block wouldnt take second printf
// and second printf wouldnt be dependable from if
// and ofc else if would be "dissconected" from if

    return 0;
}
