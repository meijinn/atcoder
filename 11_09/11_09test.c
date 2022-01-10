#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int score = 0;

    /* 2. 変数値 */
    /* 3. 計算 */
    do{
        if(score!=0){
            printf("テストの点数は0~100の数値で入力してください．\n");
        }
        printf("テストの点数を入力して下さい：");
        scanf("%d",&score);
    } while (score < 0 || score > 100);
    printf("テストの点数：%2.0d点\n",score);

    /* 4. 出力 */
    return 0;

}