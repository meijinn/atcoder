#include <stdio.h>

int main(void){
    int A,B;
    scanf("%d %d",&A,&B);

    int nyukokei = A+B;
    int nyushi = B;
    if(nyukokei >= 15 && nyushi >= 8){
        printf("1\n");
    }
    else if (nyukokei >= 10 && nyushi >= 3){
        printf("2\n");
    }
    else if (nyukokei >= 3){
        printf("3\n");
    }
    else{
        printf("4\n");
    }
}