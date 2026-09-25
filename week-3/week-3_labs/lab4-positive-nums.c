// lab4 - print amount of positive nums

#include <stdio.h>

int main(void){    
    int n;
    int num;
    int c = 0;

    printf("Enter amount of numbers in your sequence: ");
    scanf("%d", &n);

    while(n!=0){
        printf("Enter your number: ");
        scanf("%d", &num);
        if (num>0){
            c+=1;
        }
        n--;
    }

    printf("Count of positive numbers is: %d", c);
    return 0;

}
