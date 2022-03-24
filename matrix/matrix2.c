/*Elaborar um programa cuja entrada são duas matrizes 𝐴 de tamanho 𝑎×𝑏 e um matriz 𝐵 
de  tamanho 𝑏×𝑐 com 𝑎,𝑏,𝑐≤4.
A saída é o 𝑝𝑟𝑜𝑑𝑢𝑡𝑜  𝐴⋅𝐵 das matrizes.
Utilize dupla precisão e 4 casas decimais depois da vírgula.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int a, b, c, d;
    int i, j, k;

    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &a, &b);
    printf("Tamanho da matriz B:\n");
    scanf("%d %d", &c, &d);
    if (b != c) {
        printf("Dados incorretos.\n");
        return 0;
    }
    else{
        double matrizA[a][b];
        double matrizB[c][d];
        printf("Matriz A:\n");
        for(i = 0; i < a; i++){
            for(j = 0; j < b; j++){
                scanf("%lf", &matrizA[i][j]);
            }
        }
        printf("Matriz B:\n");
        for(j = 0; j < c; j++){
            for(i = 0; i < d; i++){
                scanf("%lf", &matrizB[i][j]);
            }
        }
        double resp = 0;
        double matrizC[i][j];
        printf("Matriz AB:\n");
        for(i = 0; i < a; i++){
            for(j = 0; j < d ; j++){
                matrizC[i][j] = 0;
                for(k = 0; k < b; k++){
                    resp = matrizC[i][j] + matrizA[i][k] * matrizB[k][j];
                }
                matrizC[i][j] = resp;
                resp = 0;
            }
        }
        for(i = 0 ; i < a; i++){
            for(j = 0; j < d; j++){
                printf(" %.4lf ", matrizC[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}