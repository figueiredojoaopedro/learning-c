/*
Leia um vetor com 𝑛 componentes do tipo int e

defina uma função para inverter os 𝑛 elementos do vetor.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = n; i >= 0; i-- ) {
        printf("%d ", arr[i]);
    }
    return 0;
}