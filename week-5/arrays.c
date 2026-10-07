#include <stdio.h>

int main(){
    int n;
    int a[n];
    int z;
    int sum = 0;

    // array is just a box where you can store values inside one variable
    // it is useful if you have many values so you dont need to assign to each of them a var
    int scores[5] = {7,9,6,10,8};
    // types inside array needs to be the same (e.g only int, float, etc...)
    // var indexation goes from 0 to n-1 where n is arrayname[x]
    // e.g if you want to reach 8 in scores you will write scores[4] NOT scores[5]
    printf("last num in scores array is: %d\n", scores[4]);

    // small code where you can make your custom int taking array any len you want!
    // we define for from 0 to n-1 so there are wouldnt be index problems
    printf("len of array? ");
    scanf("%d", &n);

    for (int i = 0; i <= n-1; i++){
        printf("enter num: ");
        scanf("%d", &z);
        a[i] =z;
    }
    // print all elements in our defined var and thir sums
    for (int z = 0; z <= n-1; z++){
        printf("a[%d] = %d\n", z, a[z]);
        sum += a[z];
    } 
    printf("Sum of all nums in your array is: %d", sum);
    return 0;
}