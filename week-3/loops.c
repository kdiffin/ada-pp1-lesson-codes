#include <stdio.h>

int main(void){
    int i = 0;

    printf("while loop: ");
    while (i < 5)
    {
        printf("%d Hello world!\n", i);
        i = i+1;
        // as a shortcut for i = i + 1 you can also write i++
    }

    printf("\n for loop: ");
    for(int z = 0; z < 5; z++)
    {
        printf("say Hello FOR World!\n");
    }

    printf("loop is ended");
    return 0;
    
}