
#include <math.h>
#include <stdio.h>

// printf formatting:
// %d    -> integer
// %f    -> floating-point number
// %lf   -> double (same as %f in printf)
// %.2lf -> double, print 2 digits after decimal point
// %.15lf -> double, print 15 digits after decimal point
// %%    -> print an actual % sign
//
// the number after . controls decimal precision
// %.1lf -> 2.1
// %.2lf -> 2.10
// %.5lf -> 2.10000
//
// scanf takes in the address of a variable and assigns whatever you typed into ti 
int main(void) {
    double r;
    const double PI = 3.1415;


    printf("enter the circles radius please: ");
    scanf("%lf", &r);

    printf("you entered in radius: %lf\n", r);
    printf("the area of the circle is %lf\n", pow(r,2)*PI);
    printf("the length of the circle is %lf\n", 2*r*PI);

    return 0;
}
