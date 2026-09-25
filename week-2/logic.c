#include  <stdio.h>

int main(void) {
    int age = 18;
    // This will print 0 because age is not greater than 18
    printf("%d\n greater than 18: ", age > 18);

    // This will print 0 because age is not less than 18
    printf("%d\n less than 18: ", age < 18); 

    // This will print 1 because age is equal to 18
    printf("%d\n equal to 18: ", age == 18); 

    // This will print 1 because age is greater than or equal to 18
    printf("%d\n greater than or equal to 18: ", age >= 18); 

    // This will print 1 because age is less than or equal to 18
    printf("%d\n less than or equal to 18: ", age <= 18); 

    // This will print 0 because age is not equal to 18
    printf("%d\n not equal to 18: \n", age != 18); 

    // so, 0 is FALSE and 1 is TRUE

    // if,elif,else statement
    if (age > 18) {
        printf("You are older than 18\n");
    } else if (age < 18) {
        printf("You are younger than 18\n");
    } else {
        printf("You are 18 years old\n");
    }

    // in this case nothing will be printed because age is not greater than 18
    // so the if statement will not be executed
    if (age > 18) {
        printf("You are older than 18\n");
    }

    return 0;
}