#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int value,value10,value30,value50,value80;


    /* 2. 変数値(入力) */
    printf("定価を整数で入力して下さい: ");
    scanf("%d", &value);


    /* 3. 計算 */
    value10 = (int)(value*0.9+0.5);
    value30 = (int)(value*0.7+0.5);
    value50 = (int)(value*0.5+0.5);
    value80 = (int)(value*0.2+0.5);


    /* 4. 出力 */
    printf("1割引: %d円,3割引: %d円,5割引: %d円,8割引: %d円\n",value10,value30,value50,value80);



}