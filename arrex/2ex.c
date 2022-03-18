/*
Leia um vetor Taxas com 𝑛 componentes do tipo double e

defina uma função para determinar o índice do maior valor dentre os 𝑛 elementos do vetor  Taxas.

Teste a função fazendo uma chamada dentro da função "main". O resultado deverá ser do tipo int
*/
#include <stdlib.h>
#include <stdio.h>

int main (void){
    int n = 0;
    scanf("%d", &n);
    double arr[n];
    double resp = 0;
    for (int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        resp = resp + arr[i];
    }
    resp = resp / n;
    printf("%.2lf", resp);

    return 0;
}