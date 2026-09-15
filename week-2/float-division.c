#include <stdio.h> 

// order of operations are important 
// how to do float division versus int division
// order of operations are important 
// how to do float division versus int division
//
// printf formatting:
// %d    -> int
// %f    -> float/double
// %.2f  -> float/double, show 2 digits after decimal
// %lf   -> double (same as %f in printf)
// %.2lf -> double, show 2 digits after decimal
// %%    -> literally print a % sign
//
// examples:
// printf("%d", 5);       -> 5
// printf("%f", 2.5);     -> 2.500000
// printf("%.2f", 2.5);   -> 2.50
// printf("50%%");        -> 50%

int main(void) {
    int a = 5; 
    int b = 2; 

    printf("a / b = %lf\n", a*1.0/b); // this works because the a becomes a float 
    // doesnt work lol (try to found out why?)
    // printf("a / b = %lf\n", a/b*1.0) 

    // how to do modulo (azərbaycanca qalığ)
    printf("%d %% %d = %d", a,b, a%b);

    return 0;
}
