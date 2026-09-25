#include <stdio.h>

int main(void){
    int i = 0;

    printf("while loop: ");
    while (i < 5)
    {
        printf("%d Hello world!\n", i);
        i = i+1;
        // as a shortcut for i = i + 1 you can also write i++
        // or i+=1 like in Python
    }

    printf("\n for loop: ");
    for(int z = 0; z < 5; z++)
    {
        printf("say Hello FOR World!\n");
    }

    printf("loop is ended\n");

    // yes, you can do opposite count in loops
    // as loops dosent have limitations regarding where you start and where you will end

    // only thing is that you need do define start-end of loop precisely
    // so your loop wouldnt be infinite-looping
    printf("opposite loop");

    i = 5;
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