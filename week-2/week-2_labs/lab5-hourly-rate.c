//lab5 - hourly rate calculator

#include <stdio.h>

int main(void){
    
    float rate;
    int time;
    float pay;

    printf("enter your hourly rate: ");
    scanf("%f", &rate);

    printf("enter hours you have worked this week: ");
    scanf("%d", &time);

    if (time>40){
        float overtime_pay = rate*1.5;
        pay = (time-40)*overtime_pay+40*rate;
        printf("Your pay with overtime is: %.2f", pay);
    }
    else if (time<=40){
        pay = time*rate;
        printf("Your pay is: %.2f", pay);
    }
    else{
        printf("You sure that you have worked?");
    }

    return 0;
}
