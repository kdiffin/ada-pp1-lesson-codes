#include <stdio.h>

int main() {
    char grade = 'A';
    char gr = 'y';
    char digit = '5';

    
    //printf("%d\n", digit); - This would give a error because digit is a character, not an integer
    // for fun you can remove comments and see what happens, but use gcc -Wall to see the warning
    printf("%c\n", digit); // This will print the CHAR '5', not an integer
    printf("               test\n"); // This will print test with spaces before it, as spaces is also a character

    printf("now enter two chars separeated by space: ");
    scanf("%c %c", &grade, &gr);
    printf("You entered: %c and %c\n", grade, gr); //works as expected, right?

    printf("now do it again: ");
    scanf("%c%c", &grade, &gr);
    printf("You entered: %c and %c\n", grade, gr); 
    //spaces are important, if you don't put a space between the %c's, it will not work as expected
    
    return 0;
}