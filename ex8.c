#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1,num2,num3;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if(num1<num2){
        if(num1<num3){
            if(num2<num3){
                printf("%d %d %d",num1,num2,num3);
            }
            else{
                printf("%d %d %d",num1,num3,num2);
            }
        }
    }
    else if (num2<num3){
        if(num1<num3){
            printf("%d %d %d",num2,num1,num3);
        }
        else{
            printf("%d %d %d",num2,num3,num1);
        }
        }
    else if(num3<num1){
        if(num1<num2){
            printf("%d %d %d",num3,num1,num2);
        }
        else{
            printf("%d %d %d",num3,num2,num1);
        }
    }
}