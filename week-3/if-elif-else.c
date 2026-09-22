//just to  experiment with if-elif-else statements
#include <stdio.h>

int main(void) {
    int number;
    float grade;
    int age;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }


    // get ur letter grade based on the percentage
    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade >= 94) {
        printf("You got an A.\n");
    } 
    else if (grade >= 90) {
        printf("You got a A-.\n");
    } 
    else if (grade >= 87) {
        printf("You got a B+.\n");
    } 
    else if (grade >= 83) {
        printf("You got a B.\n");
    } 
    else if (grade >= 80) {
        printf("You got a B-.\n");
    } 
    else if (grade >= 77) {
        printf("You got a C+.\n");
    } 
    else if (grade >= 73) {
        printf("You got a C.\n");
    } 
    else if (grade >= 70) {
        printf("You got a C-.\n");
    } 
    else if (grade >= 67) {
        printf("You got a D+.\n");
    } 
    else if (grade >= 60) {
        printf("You got a D.\n");
    } 
    else {
        printf("You got an F.\n");
    }

    //category by age
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age >= 13) {
        printf("You are a teenager.\n");
    } else if (age >= 3) {
        printf("You are a child.\n");
    }

    // if you will input some invalid input for any of the variables
    //this will still be printed, as it does not depend on any of the variables
    //it will always be printed at the end of the program

    // try to input number smaller than 3 for age
    //and you will see that nothing will be printed for age
    //but printf below will still be executed
    printf("Thank you for using the program!\n"); 
    return 0;
}