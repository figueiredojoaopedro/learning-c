/*Elaborar um programa cuja entrada sΓ£o duas matrizes π΄ de tamanho πΓπ e um matriz π΅ 
de  tamanho πΓπ com π,π,πβ€4.
A saΓ­da Γ© o πππππ’π‘π  π΄βπ΅ das matrizes.
Utilize dupla precisΓ£o e 4 casas decimais depois da vΓ­rgula.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    printf("Tamanho da matriz A:\n");
    int a,b,c,d;
    int i,j,x;
    scanf("%d%d",&a, &b);
    double matriza[a][b];
    printf("Tamanho da matriz B:\n");
    scanf("%d%d",&c ,&d);
    double matrizb[c][d];
    double matrizc[a][d], aux=0;
    
    if(a<=4 && b<=4 && c<=4 && b==c){
        printf("Matriz A:\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                scanf("%lf",&matriza[i][j]);
            }
        }
        printf("Matriz B:\n");
        for(i=0;i<c;i++){
            for(j=0;j<d;j++){
                scanf("%lf",&matrizb[i][j]);
            }
        }
        printf("Matriz AB:\n");
        for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                matrizc[i][j]=0;
                for(x=0;x<c;x++){
                    aux += matriza[i][x]*matrizb[x][j];
                }
                matrizc[i][j]=aux;
                aux=0;
            }
        }
        for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                printf(" %.4f ",matrizc[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Dados incorretos.");
    }
}