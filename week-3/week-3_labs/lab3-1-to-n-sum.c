// lab3 - sum of n values

#include <stdio.h>

int main(void){    
    int n;
    // is is MUST to define 0 to this variable so it would print right sum
    // as just without nothing it automatically gets value of where it located in memory
    int sum = 0; 

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum += i;
    }
    
    printf("sum of nums from 1 to %d is: %d", n,sum);
    return 0;

}
