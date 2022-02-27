#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada1 = 0;
    int entrada2 = 0;
    scanf("%d\n%d", &entrada1, &entrada2);
    if(entrada1 >= entrada2){
        printf("%d %d", entrada2, entrada1);
    }
    else{
        printf("%d %d", entrada1, entrada2);
    }
    return 0;
}
