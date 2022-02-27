#include <stdio.h>
#include <stdlib.h>


int main() {
    int number[4], i, aux;
    aux = 0;

    for(i=0; i<4; ++i){
        scanf("%d", &number[i]);
        if(number[i-2] + number[i-1] > number[i]){
            printf("S");
            aux = aux + 1;
            break;
        }
    }
    if(aux == 0){
        printf("N");
    }
}