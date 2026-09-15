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
    double n = 2.1;

    scanf("enter ur number: %lf", &n);


    printf("square root of %.1lf is %.15lf\n", n, sqrt(n));
    printf("square of %lf = %lf\n", n, pow(n, 2));
    printf("round of %lf = %lf\n", n, round(n));

    return 0;
}
