/*Multiplicação de Matriz por Vetor
Elaborar um programa cuja entrada é uma matriz 𝑀 de tamanho 𝑎×𝑏, 0<𝑎,𝑏≤4 e 
um vetor 𝑣 com 𝑏 coordenadas.
A saída é o 𝑝𝑟𝑜𝑑𝑢𝑡𝑜 da matriz 𝑀 pelo vetor 𝑣.
Utilize dupla precisão e 4 casas decimais depois da vírgula.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int a, b;
    int i, j;
    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &a, &b);
    double matriz[a][b];
    double vetor[b];
    printf("Matriz A:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    printf("Digite o vetor com %d coordenadas:\n", b);
    for(i = 0; i < b; i++){
        scanf("%lf", &vetor[i]);
    }
    // resp declaration
    double resp = 0;
    printf("Produto de A por v:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            resp = resp + matriz[i][j] * vetor[j];
        }
        printf("%.4lf\n", resp);
        resp = 0;
    }
    
    return 0;
}

