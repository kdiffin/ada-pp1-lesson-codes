// lab2 bill splitter

#include <stdio.h>

int main(void){

    double bill;
    int people; // people cannot be in a float amount lol

    printf("Enter the total bill amount: ");
    scanf("%lf", &bill);

    printf("Enter the number of people: ");
    scanf("%d", &people);

    double per_person = bill / people;

    printf("Each person should pay: %.2f\n", per_person); //which currency decide yourself
    return 0;
}
