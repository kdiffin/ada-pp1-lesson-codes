// from loops.c we know that for i = i+1 can be shortly written as i++ or i+=1

// in first case it is sensetive where you place ++ or -- 
// e.g i++ and ++i NOT EQUAL TO EACH OTHER, and each of them has their name

// i++ (or i--) is called POST-increment
// it means that variable i firslty would have its assigned value
// and then it would be changed to higher (lower) value

// ++i (--i) is called PRE-increment
// it means that variable i would have an updated value immediately

// see example here:
#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 5;

    int x = ++a; // a becomes 6 FIRST, then x is assigned 6
    int y = b++; // y gets assigned 5 FIRST, then b becomes 6

    printf("a = %d, x = %d\n", a, x); // Output: a = 6, x = 6
    printf("b = %d, y = %d\n", b, y); // Output: b = 6, y = 5

    //well, what if i need to multiply or divide and write in short form?
    // then you can do in i+=1 form
    // e.g:
    // i+=2  is the same as i = i+2
    // i-=7 is the same as i = i-7
    // i*=3  is the same as i = i*3
    // i/=3  is the same as i = i/3
    // i%=4  is the same as i = i%4

    printf("%d\n", a*=3);
    printf("%d\n", b/=3);
    printf("%d\n", a%=2);

    return 0;
}