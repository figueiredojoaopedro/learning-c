#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, j, aux, bigger, number[3];

    for(i = 0; i < 3; ++i){
        scanf("%d", &number[i]);
        number[i] = number[i]*number[i];
        if (number[i] > number[i-1]){
            bigger = number[i];
        }
    }
    if(bigger = number[i] + number[i-1]){
        printf('S');
        ++aux;
    }
    else if(aux == 0){
        printf("N")
    }


    return 0;
}