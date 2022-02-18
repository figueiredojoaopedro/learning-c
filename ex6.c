#include <stdio.h>
#include <stdlib.h>

int main (void){
    int entry_num, first, second, third, fourth;
    scanf("%d", &entry_num);
    // each algarism of the result is equal to the entry plus a fourth one
    // the fourth algarism is equal to (first_alg + second_alg*3 + third_alg*5)%7
    // then just print everything as a result
    first = entry_num / 100;
    second = (entry_num%100) / 10;
    third = (entry_num%100)%10;
    fourth = (first + second*3 + third*5)%7;
    printf("%d%d%d%d\n", first, second, third, fourth);
    return 0;
}