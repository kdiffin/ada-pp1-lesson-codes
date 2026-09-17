// lab1 Celsius -> Farenheit

//& before variable name in scanf is used to pass the address of the variable c to itself, allowing it to store the value directly into that variable.

#include <stdio.h>

int main(void){
    double c;
    printf("Enter Temperature in Celsius: ");
    scanf("%lf", &c); //input temperature in Celsius
    
    double f = c*1.8+32; // formula to convert Celsius to Farenheit
    printf("%.2f degrees in Celsius is %.2f degrees in Farenheit\n",c,f);

    return 0;
}
