#include <stdio.h>

// example of functions which can work with arrays
// all of our written functions take array and their length

// print all array values
void print_array(int array[],int len){
    for(int i = 0; i<=len-1; i++){
        printf("%d ", array[i]);
    }
}

// sum all array values
int sum_array(int array[],int len){
    int sum = 0;
    for(int i = 0; i<=len-1; i++){
        sum += array[i];
    }
    return sum;
}

// you think this function wouldnt work?
// suprisingly but no, it will
void double_array(int array[],int len){
    for(int i = 0; i<=len-1; i++){
       array[i] = array[i]*2;
    }
}

// num finder in array
void find_num(int array[], int len, int target){
    for(int i = 0; i<=len-1; i++){
        if (array[i] == target){
            printf("\n%d is located in index %d", target, i);
        }
    }
}

// num finder but smth is wrong here...
void find_num_V2(int array[], int len, int target){
    int index = 0;
    for(int i = 0; i<=len-1; i++){
        if (array[i] == target){
            index = i;
        }
    }
    printf("\n%d is located in index %d", target, index);
}

// :thinking:
void find_num_tez_bazar(int array[], int len, int target){
    int index = 0;
    for(int i = 0; i<=len-1; i++){
        if (array[i] == target){
            index = i;
            break;
        }
    }
    printf("\n%d is located in index %d", target, index);
}

int main(){
    int z[3] = {1,2,3};

    print_array(z,3);
    int sums = sum_array(z,3);
    printf("\nsum of all nums in array is: %d\n", sums);

    double_array(z,3);
    print_array(z,3);
    find_num(z,3,7);

    // tricky one
    int g[5] = {1,2,3,3,3};
    find_num_V2(g,5,3);
    find_num_tez_bazar(g,5,3);

}