#include <stdio.h>

int main(void){
    int M,H;
    scanf("%d %d",&M,&H);
    if(H%M == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}