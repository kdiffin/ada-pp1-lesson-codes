// lab5 - password

#include <stdio.h>

int main(void){   
    int password = 10900;
    // here i defined 0 in case if memory location and password would be equal
    int enter = 0;

    while(password != enter){
        printf("Enter your password: ");
        scanf("%d", &enter);
    }
    printf("password is right!");

    return 0;

}
