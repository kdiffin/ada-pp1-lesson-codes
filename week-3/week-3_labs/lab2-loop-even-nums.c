// lab2 - print nums from 2 to n which is even

#include <stdio.h>

int main(void){    
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    // yes, you can combaine if-elif-else inside loops

    for(int i=1; i<=n; i++){
        if (i%2 == 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
