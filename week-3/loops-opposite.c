#include <stdio.h>

int main(void){
    int i = 5;
    while (i > 0)
    {
        printf("%d Hello world!\n", i);
        i = i-1;

    }

    for(int z = 5; z > 0; z--)
    {
        printf("%d say Hello FOR World!\n", z);
    }

    return 0;
    
}