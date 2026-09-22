// lab3 distance formula

// when entering the coordinates of the two points
// enter them in the format: x1 y1 x2 y2, separated by spaces. 
// For example, if the first point is (3, 4) and the second point is (7, 1) 
// you would enter: 3 4 and 7 1

#include <stdio.h>
#include <math.h> // we need math.h for the sqrt(), pow() function
int main(void){
    double x1, y1, x2, y2; // coordinates of the two points

    printf("Enter the coordinates of the first point (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // distance formula

    printf("The distance between the two points is: %.2f\n", distance);
    return 0;

}
