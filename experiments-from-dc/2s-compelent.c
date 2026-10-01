// the magic of 2s compelent and overflow in C

#include <stdio.h>

int main(void){
    char num = 127; 
    printf("%d\n", ++num);
    printf("%d\n", num++);
    printf("%d\n", num+=2);
    
    // just take a guess what each printf's would show on the screen
    // you thought that they will print 128,128,129?
    // but nah, the thing is that they are CHAR by default
    // so what? sometimes C works with BINARY value of int and then
    // turn BIN value to DEC
    // by the way this process is also dependable by proccesor which is used in your PC
    // e.g: in Intel processors 3rd printf would print 129, but in AMD and Apple M-series
    // it prints -125, as they work with BIN first, it overflows, and then overflowed BIN turns to DEC

}