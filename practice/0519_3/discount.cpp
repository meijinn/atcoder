#include <stdio.h>

int main(void){
    float A,B;
    scanf("%f %f",&A,&B);
    float dis = 1.0-(B/A);
    printf("%f\n",dis*100.0);
}