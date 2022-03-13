#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist2(int,int,int,int);

int main() {
  int x1,x2,y1,y2;
  printf("Digite as coordenadas do 1o. ponto:\n");
  scanf("%d%d",&x1,&y1);
  printf("Digite as coordenadas do 2o. ponto:\n");
  scanf("%d%d",&x2,&y2);
  printf("Distancia entre os dois pontos: %f", dist2(x1,y1,x2,y2));
  return 0;
}

float dist2(int x1,int y1,int x2,int y2){
  double resp = 0;
  resp = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
  return resp;
}

