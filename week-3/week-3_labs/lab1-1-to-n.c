// lab1 - print nums from 1 to n

#include <stdio.h>

int main(void){
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
    
    return 0;

}
