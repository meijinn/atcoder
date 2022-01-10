#include <stdio.h>

int main(void){
    int X;
    scanf("%d",&X);
    if (X%100 == 0){
        printf("100\n");
    }
    else{
        printf("%d\n",100-(X%100));
    }   
}