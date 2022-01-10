#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int age;


    /* 2. 変数値 */
    printf("年齢：");
    scanf("%d",&age);

    /* 3. 計算 */
    if (age <= 3){
        printf("幼児：無料\n");
    } else if (age <= 12){
           printf("子供：250円\n");
    }   else{
           printf("大人：400円\n");
    }
    /* 4. 出力 */
    return 0;
}