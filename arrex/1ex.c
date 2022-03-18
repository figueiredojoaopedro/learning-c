/*Leia um vetor Valores com 𝑛 componentes do tipo double e

defina uma função para determinar a média entre os 𝑛 elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.*/

#include <stdlib.h>
#include <stdio.h>

int main (void){
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int resp = 0;
    double maior = -999999;

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > maior){
            maior = arr[i];
            resp = i;
        }
    }
    printf("%d", resp);

    return 0;
}