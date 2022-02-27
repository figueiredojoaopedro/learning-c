#include <stdio.h>
#include <stdlib.h>

int main(){
    int number[3], i,bigger,smaller;

    for(i = 0; i < 3; ++i){
        scanf("%d", &number[i]);
        if(number[i] > number[i-1])
            bigger = number[i];
        if(number[i] < number[i+1])
            smaller = number[i];
    }
    return 0;
}