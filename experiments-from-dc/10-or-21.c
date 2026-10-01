#include <stdio.h>

int main() {
    int count = 0;

    for (float f = 0.0f; f != 1.0f; f += 0.1f) {
        count++;
        if (count > 20) break;
    }
    printf("Count: %d\n", count);
        
// looks like a basic loop?
// and you think that answer would be 10 or 11?
// buuuut you will be wrong :(
// as in bin there are no exact representation of float nums
// so what we defined as 0.1 in C is something like:
// 0.10000000149...
// so when we sum 0.1 x10 times
// it wouldnt be EXACTLY equal to 1.0
// but would be smth like 1.0000000149... which is != to 1

    int nc = 0;

    for (float z = 0.0f; z != 1.0f; z += 0.2f) {
        nc++;
        if (nc > 10) break;
    // you think that based on loop above answer is 11?
    // nuh-uh LOL
    // you will be suprised but the answer is 5!
    // again its the magic of float representation in BIN
    // yeah it's pretty much complicated, so just dont use float in ur loops
    }
    printf("Count: %d\n", nc);
    return 0;

} 

// see IEEE 754 for more info